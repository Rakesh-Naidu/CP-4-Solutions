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
bool comp11(string a,string b)
{
	if(a[1]==b[1])
	return a[0]<b[0];
	return a[1]<b[1];
}
bool comp22(string a,string b)
{
	if(a[1]==b[1])
	return a[0]<b[0];
	return a[1]>b[1];
}
bool comp1(string a,string b)
{
	if(a[2]==b[2])
	return a[1]<b[1];
	return a[2]<b[2];
}
bool comp2(string a,string b)
{
	if(a[2]==b[2])
	return a[1]<b[1];
	return a[2]>b[2];
}
int main()
{
	fast
	char c[17][33];
	for(int i=0;i<17;i++)
	{
		for(int j=0;j<33;j++)
		cin>>c[i][j];
	}
	vector<string> pw,pbl,wp,bp;
	for(int i=0;i<17;i++)
	{
		if(i&2==0)
		continue;
		for(int j=0;j<33;j++)
		{
			if(c[i][j]=='|'||c[i][j]=='.'||c[i][j]==':')
			continue;
			if(c[i][j]=='p')
			{
				string s="";
				s+=(j/4+'a');
				s+=(8-i/2+'0');
				pbl.pb(s);
			}
			else if(c[i][j]=='P')
			{
				string s="";
				s+=(j/4+'a');
				s+=(8-i/2+'0');
				pw.pb(s);
			}
			else if(c[i][j]=='K'||c[i][j]=='Q'||c[i][j]=='R'||c[i][j]=='B'||c[i][j]=='N')
			{
				string s="";
				s+=c[i][j];
				s+=(j/4+'a');
				s+=(8-i/2+'0');
				wp.pb(s);
			}
			else if(c[i][j]=='k'||c[i][j]=='q'||c[i][j]=='r'||c[i][j]=='b'||c[i][j]=='n')
			{
				string s="";
				s+=c[i][j]-32;
				s+=(j/4+'a');
				s+=(8-i/2+'0');
				bp.pb(s);
			}
		}
	}
	cout<<"White: ";
	string white="",black="";
	sort(all(wp),comp1);
	for(int i=0;i<wp.size();i++)
	{
		if(wp[i][0]=='K')
		{
			white+=wp[i];
			white+=',';
		}
	}
	for(int i=0;i<wp.size();i++)
	{
		if(wp[i][0]=='Q')
		{
			white+=wp[i];
			white+=',';
		}
	}
	for(int i=0;i<wp.size();i++)
	{
		if(wp[i][0]=='R')
		{
			white+=wp[i];
			white+=',';
		}
	}
	for(int i=0;i<wp.size();i++)
	{
		if(wp[i][0]=='B')
		{
			white+=wp[i];
			white+=',';
		}
	}
	for(int i=0;i<wp.size();i++)
	{
		if(wp[i][0]=='N')
		{
			white+=wp[i];
			white+=',';
		}
	}
	sort(all(pw),comp11);
	for(int i=0;i<pw.size();i++)
	{
		white+=pw[i];
		white+=',';
	}
	if(!white.empty())
	for(int i=0;i<white.size()-1;i++)
	cout<<white[i];
	cout<<"\n";
	cout<<"Black: ";
	sort(all(bp),comp2);
	for(int i=0;i<bp.size();i++)
	{
		if(bp[i][0]=='K')
		{
			black+=bp[i];
			black+=',';
		}
	}
	for(int i=0;i<bp.size();i++)
	{
		if(bp[i][0]=='Q')
		{
			black+=bp[i];
			black+=',';
		}
	}
	for(int i=0;i<bp.size();i++)
	{
		if(bp[i][0]=='R')
		{
			black+=bp[i];
			black+=',';
		}
	}
	for(int i=0;i<bp.size();i++)
	{
		if(bp[i][0]=='B')
		{
			black+=bp[i];
			black+=',';
		}
	}
	for(int i=0;i<bp.size();i++)
	{
		if(bp[i][0]=='N')
		{
			black+=bp[i];
			black+=',';
		}
	}
	sort(all(pbl),comp22);
	for(int i=0;i<pbl.size();i++)
	{
		black+=pbl[i];
		black+=',';
	}
	if(!black.empty())
	for(int i=0;i<black.size()-1;i++)
	cout<<black[i];
	return 0;
}

