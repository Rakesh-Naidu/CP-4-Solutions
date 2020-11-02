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
int get(string s,char c)
{
	if(s[0]=='A')
	return 11;
	if(s[0]=='K')
	return 4;
	if(s[0]=='Q')
	return 3;
	if(s[0]=='J')
	{
		if(s[1]==c)
		return 20;
		else
		return 2;
	}
	if(s[0]=='T')
	return 10;
	if(s[0]=='9')
	{
		if(s[1]==c)
		return 14;
	}
	return 0;
}
int main()
{
	fast
	int n;
	char c;
	cin>>n>>c;
	int v=0;
	for(int i=0;i<4*n;i++)
	{
		string s;
		cin>>s;
		v+=get(s,c);
	}
	cout<<v<<"\n";
	return 0;
}
