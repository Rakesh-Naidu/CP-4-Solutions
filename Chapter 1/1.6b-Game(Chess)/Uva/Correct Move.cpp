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
	int k,q,r;
	int ct=0;
	map<int,pair<int,int> > m;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			m.insert(make_pair(ct,make_pair(i,j)));
			ct++;
		}
	}
	while(scanf("%d%d%d",&k,&q,&r)==3)
	{
		int qr=m[q].fi,qc=m[q].se,kr=m[k].fi,kc=m[k].se,rr=m[r].fi,rc=m[r].se;
//		cout<<kr<<" "<<kc<<" "<<qr<<" "<<qc<<" "<<rr<<" "<<rc<<"\n";
		if(k==q)
		cout<<"Illegal state\n";
		else if((qr!=rr&&qc!=rc)||q==r)
		cout<<"Illegal move\n";
		else
		{
			bool f=false;
			if(qr==rr&&(rr==kr))
			{
				if(qc<rc)
				for(int i=qc+1;i<=rc;i++)
				{
					if(i==kc)
						f=true;
				}
				else
				for(int i=qc-1;i>=rc;i--)
				{
					if(i==kc)
					f=true;
				}
			}
			if(qc==rc&&(kc==rc))
			{
				if(qr<rr)
				for(int i=qr+1;i<=rr;i++)
				{
					if(i==kr)
					f=true;
				}
				else
				for(int i=qr-1;i>=rr;i--)
				{
					if(i==kr)
					f=true;
				}
			}
			if(f)
			cout<<"Illegal move\n";
			else if((rr==kr+1&&rc==kc)||(rr==kr-1&&rc==kc)||(rr==kr&&rc==kc+1)||
			(rr==kr&&rc==kc-1))
			cout<<"Move not allowed\n";
			else
			{
				if((k==0&&r==9)||(k==7&&r==14)||(k==56&&r==49)||(k==63&&r==54))
				cout<<"Stop\n";
				else
				cout<<"Continue\n";
			}
		}
	}
	return 0;
}
