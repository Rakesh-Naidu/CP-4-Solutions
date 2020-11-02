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
char getl(char c)
{
	if(c=='r')
	c='t';
	else if(c=='t')
	c='l';
	else if(c=='l')
	c='d';
	else
	c='r';
	return c; 
}
char getr(char c)
{
	if(c=='r')
	c='d';
	else if(c=='t')
	c='r';
	else if(c=='l')
	c='t';
	else
	c='l';
	return c;
}
int main()
{
	fast
	vector<string> v(8);
	for(int i=0;i<8;i++)
	cin>>v[i];
	string s;
	cin>>s;
	pair<int,int> tp={7,0};
	char c='r';
	bool bug=false,dia=false;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='F')
		{
			if(c=='r')
			{
				tp.se++;
			}
			else if(c=='l')
			{
				tp.se--;
			}
			else if(c=='t')
			{
				tp.fi--;
			}
			else if(c=='d')
			{
				tp.fi++;
			}
			int x=tp.fi,y=tp.se;
			if(x<0||x>7||y<0||y>7)
			{
				cout<<"Bug!\n";
				return 0;
			}
			if(v[x][y]=='C'||v[x][y]=='I')
			{
				cout<<"Bug!\n";
				return 0;
			}
		}
		else if(s[i]=='L')
		{
			c=getl(c);
		}
		else if(s[i]=='R')
		{
			c=getr(c);
		}
		else
		{
			int tx=tp.fi,ty=tp.se;
			if(c=='r')
			{
				ty++;
			}
			else if(c=='l')
			{
				ty--;
			}
			else if(c=='t')
			{
				tx--;
			}
			else if(c=='d')
			{
				tx++;
			}
			if(tx<0||tx>7||ty<0||ty>7)
			{
				cout<<"Bug!\n";
				return 0;
			}
			if(v[tx][ty]!='I')
			{
				cout<<"Bug!\n";
				return 0;
			}
			else
			v[tx][ty]='.';
		}
	}
	if(v[tp.fi][tp.se]=='D')
	cout<<"Diamond!\n";
	else
	cout<<"Bug!\n";
	return 0;
}
