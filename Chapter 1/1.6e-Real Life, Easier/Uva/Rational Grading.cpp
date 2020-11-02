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
int hex(string s)
{
	map<char,int> m;
	m['0']=0;
	m['1']=1;
	m['2']=2;
	m['3']=3;
	m['4']=4;
	m['5']=5;
	m['6']=6;
	m['7']=7;
	m['8']=8;
	m['9']=9;
	m['A']=10;
	m['B']=11;
	m['C']=12;
	m['D']=13;
	m['E']=14;
	m['F']=15;
	int ml=1,ans=0;
	for(int i=s.size()-1;i>=2;i--)
	{
		ans+=(m[s[i]]*ml);
		ml*=16;
	}
	return ans;
}
int oct(string s)
{
	map<char,int> m;
	m['0']=0;
	m['1']=1;
	m['2']=2;
	m['3']=3;
	m['4']=4;
	m['5']=5;
	m['6']=6;
	m['7']=7;
	int ml=1,ans=0;
	for(int i=s.size()-1;i>=1;i--)
	{
		ans+=(m[s[i]]*ml);
		ml*=8;
	}
	return ans;
}
int main()
{
	fast
	while(1)
	{
		string a;
		int b;
		cin>>a>>b;
		if(b==0)
		break;
		int n=0;
		if(a[0]=='0'&&a[1]=='x')
		{
			n=hex(a);
		}
		else if(a[0]=='0')
		{
			n=oct(a);
		}
		else
		{
			stringstream ss;
			ss<<a;
			ss>>n;
		}
		int sc=0;
		for(int i=0;i<b;i++)
		{
			string s;
			int r;
			cin>>s>>r;
			if(s.size()==1)
			{
				if(r==n)
				sc++;
				else
				n=r;
			}
			else if(s[0]=='+')
			{
				if(r==++n)
				sc++;
				else
				n=r;
			}
			else if(s[0]=='-')
			{
				if(r==--n)
				sc++;
				else
				n=r;
			}
			else if(s[2]=='+')
			{
				if(r==n++)
				sc++;
				else
				n=++r;
			}
			else if(s[2]=='-')
			{
				if(r==n--)
				sc++;
				else
				n=--r;
			}
		}
		cout<<sc<<"\n";
	}
	return 0;
}
