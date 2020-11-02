#include<bits/stdc++.h>
//***** Jai Gurudev *****//
#define ll unsigned long long
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
	ll n,k;
	cin>>n>>k;
	vl a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	if(k==1)
	{
		cout<<7;
	}
	else if(k==2)
	{
		if(a[0]>a[1])
		cout<<"Bigger";
		else if(a[0]==a[1])
		cout<<"Equal";
		else
		cout<<"Smaller";
	}
	else if(k==3)
	{
		vl q;
		q.pb(a[0]);
		q.pb(a[1]);
		q.pb(a[2]);
		sort(all(q));
		cout<<q[1];
	}
	else if(k==4)
	{
		cout<<accumulate(all(a),0);
	}
	else if(k==5)
	{
		ll sum=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]%2==0)
			sum+=a[i];
		}
		cout<<sum;
	}
	else if(k==6)
	{
		for(int i=0;i<n;i++)
		{
			cout<<(char)(97+a[i]%26);
		}
	}
	else
	{
		ll v[n+1];
		memset(v,0,sizeof(v));
		ll i=0;
		while(1)
		{
			if(i>=n)
			{
				cout<<"Out";
				break;
			}
			if(v[i]==1)
			{
				cout<<"Cyclic";
				break;
			}
			if(i==n-1)
			{
				cout<<"Done";
				break;
			}
			v[i]=1;
			i=a[i];
		}
	}
	return 0;
}
