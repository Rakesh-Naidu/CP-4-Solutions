#include<bits/stdc++.h>
#include<string.h>
#include<cstdio>
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
//	fast
	int t;
	cin>>t;
	bool f=true;
	char ans[100]="Anywhere is fine I guess";
	while(t--)
	{
		int n;
		cin>>n;
		int ps=0,pc=0;
		char s[100];
		scanf(" %[^\n]s",s);
		for(int i=0;i<n;i++)
		{
			char c[100];
			scanf(" %[^\n]s",c);
			if(strcmp(c,"pea soup")==0)
			ps=1;
			if(strcmp(c,"pancakes")==0)
			pc=1;
		}
		if(ps&&pc)
		{
			if(f)
			{
				strcpy(ans,s);
				f=false;
			}
		}
	}
	cout<<ans;
	return 0;
}

