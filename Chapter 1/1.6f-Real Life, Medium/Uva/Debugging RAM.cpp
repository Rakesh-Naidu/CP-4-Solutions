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
//	fast
	int b,v;
	while(scanf("%d%d",&b,&v)==2)
	{
		unordered_map<string,ll> m;
		vector<pair<string,int> > cp;
		for(int i=0;i<v;i++)
		{
			string s;
			cin>>s;
			int n;
			cin>>n;
			m[s]=n;
			cp.pb(make_pair(s,n));
		}	
		vector<string> bt(v);
		for(auto i:cp)
		{
			string s="";
			for(int j=0;j<i.se;j++)
			{
				string q;
				cin>>q;
				s+=q;
			}
			bitset<100000> b(s);
			m[i.fi]=b.to_ulong();
		}
		int q;
		cin>>q;
		for(int i=0;i<q;i++)
		{
			string w;
			cin>>w;
			if(m.count(w)==1)
			cout<<w<<"="<<m[w]<<"\n";
			else
			cout<<w<<"="<<"\n";
		}
	}
	return 0;
}
