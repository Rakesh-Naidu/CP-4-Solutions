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
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0,h=0,n=0,o=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='C')
			{
				int j=i+1;
				if(j==s.size()||isalpha(s[j]))
				{
					c++;
					continue;
				}
				int ct=0;
				while(isdigit(s[j])&&j<s.size())
				{
					ct*=10;
					ct+=s[j]-'0';
					j++;
				}
				c+=ct;
			}
			if(s[i]=='O')
			{
				int j=i+1;
				if(j==s.size()||isalpha(s[j]))
				{
					o++;
					continue;
				}
				int ct=0;
				while(isdigit(s[j])&&j<s.size())
				{
					ct*=10;
					ct+=s[j]-'0';
					j++;
				}
				o+=ct;
			}
			if(s[i]=='H')
			{
				int j=i+1;
				if(j==s.size()||isalpha(s[j]))
				{
					h++;
					continue;
				}
				int ct=0;
				while(isdigit(s[j])&&j<s.size())
				{
					ct*=10;
					ct+=s[j]-'0';
					j++;
				}
				h+=ct;
			}
			if(s[i]=='N')
			{
				int j=i+1;
				if(j==s.size()||isalpha(s[j]))
				{
					n++;
					continue;
				}
				int ct=0;
				while(isdigit(s[j])&&j<s.size())
				{
					ct*=10;
					ct+=s[j]-'0';
					j++;
				}
				n+=ct;
			}
		}
		cout<<fixed<<setprecision(3)<<(c*12.01)+(h*1.008)+(o*16.0)+(n*14.01)<<"\n";
	}
	return 0;
}
