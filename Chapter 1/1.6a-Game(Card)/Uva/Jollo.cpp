#include<bits/stdc++.h>
//***** Jai Gurudev *****//
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define all(x) x.begin(),x.end()
#define vii vector<pair<int,int> >
#define vll vector<pair<ll,ll> >
#define pb push_back
#define fi first
#define se second
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define PI 3.1415926535897932384626433832795
#define inf64 LLONG_MAX
#define inf32 INT_MAX
#define mod 1000000007
using namespace std;
vl seive(){ll n=2;vl pr(200000,-1);for(int i=n;i<200000;i++){if(pr[i]==-1)pr[i]=1;else continue;for(int j=2*i;j<200000;j+=i)pr[j]=0;}return pr;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
bool isprime(ll n) {bool flag=true;for(ll i=2; i<=sqrt(n);i++){if(n%i==0){flag=false;break;}}return flag;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
int main()
{
	fast
	while(1)
	{
		int a,b,c,d,e;
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		if(a==0)
		break;
		vi q,w;
		q.pb(a);
		q.pb(b);
		q.pb(c);
		w.pb(d);
		w.pb(e);
		int ct1=0,ct2=0;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(w[i]>q[j])
				{
					if(i==0)
					ct1++;
					else
					ct2++;
				}
			}
		}
		int ans=0;
		// combinations needed - 3,3,1  ; 3,3,0  ; 3,2,2 
		sort(all(q));
		sort(all(w));
		if((ct1==0&&ct2<3)||(ct2==0&&ct1<3)||(ct1==1&&(ct2<=2))||((ct1<=2)&&ct2==1))
		{
			ans=-1;
		}
		else if(ct1==3&&ct2==3)
		{
			ans=1;
		}
		else if((ct1==1&&ct2==3)||(ct1==3&&ct2==1)||(ct1==3&&ct2==0)||(ct1==0&&ct2==3))
		{
			ans=q[2]+1;
		}
		else if((ct1==2&&ct2==3)||(ct1==3||ct2==2)||(ct1==2&&ct2==2))
		{
			ans=q[1]+1;
		}
		for(int i=0;i<3;i++)
		{
			if(ans==q[i])
			ans++;
		}
		for(int i=0;i<2;i++)
		{
			if(ans==w[i])
			ans++;
		}
		for(int i=0;i<3;i++)
		{
			if(ans==q[i])
			ans++;
		}
		for(int i=0;i<2;i++)
		{
			if(ans==w[i])
			ans++;
		}
		if(ans>52)
		ans=-1;
		cout<<ans<<"\n";
	}
	return 0;
}
