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
	while(1)
	{
		int k;
		string s;
		cin>>k>>s;
		if(k==0)
		break;
		for(int j=0;j<2*k+3;j++)
		{
			if(j==0)
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='0'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
				{
					cout<<" ";
					for(int i=0;i<k;i++)
					cout<<'-';
					cout<<" ";
				}
				else if(s[i]=='1'||s[i]=='4')
				{
					for(int i=0;i<k+2;i++)
					cout<<" ";
				}
				if(i!=s.size()-1)
				cout<<" ";
			}
			else if(j>0&&j<=k)
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='0'||s[i]=='4'||s[i]=='8'||s[i]=='9')
				{
					cout<<"|";
					for(int i=0;i<k;i++)
					cout<<' ';
					cout<<"|";
				}
				else if(s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='7')
				{
					cout<<" ";
					for(int i=0;i<k;i++)
					cout<<' ';
					cout<<"|";
				}
				else if(s[i]=='5'||s[i]=='6')
				{
					cout<<"|";
					for(int i=0;i<k;i++)
					cout<<" ";
					cout<<" ";
				}
				if(i!=s.size()-1)
				cout<<" ";
			}
			else if(j==k+1)
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9')
				{
					cout<<" ";
					for(int i=0;i<k;i++)
					cout<<"-";
					cout<<" ";
				}
				else
				{
					for(int i=0;i<k+2;i++)
					cout<<" ";
				}
				if(i!=s.size()-1)
				cout<<" ";
			}
			else if(j>k+1&&j<=(2*k)+1)
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='6'||s[i]=='8'||s[i]=='0')
				{
					cout<<"|";
					for(int i=0;i<k;i++)
					cout<<" ";
					cout<<"|";
				}
				else if(s[i]=='1'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='7'||s[i]=='9')
				{
					cout<<" ";
					for(int i=0;i<k;i++)
					cout<<" ";
					cout<<"|";
				}
				else if(s[i]=='2')
				{
					cout<<"|";
					for(int i=0;i<k;i++)
					cout<<" ";
					cout<<" ";
				}
				if(i!=s.size()-1)
				cout<<" ";
			}
			else if(j==2*k+2)
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='0'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='8'||s[i]=='9')
				{
					cout<<" ";
					for(int i=0;i<k;i++)
					cout<<"-";
					cout<<" ";
				}
				else if(s[i]=='1'||s[i]=='4'||s[i]=='7')
				{
					for(int i=0;i<k+2;i++)
					cout<<" ";
				}
				if(i!=s.size()-1)
				cout<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}
