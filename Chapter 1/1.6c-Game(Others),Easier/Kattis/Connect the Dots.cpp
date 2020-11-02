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
void go(vector<string> v)
{
			int r=v.size();
			int c=v[0].size();
			unordered_map<char,pair<int,int> > m; 
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					if(v[i][j]!='.')
					{
						m[v[i][j]]=make_pair(i,j);
					}
				}
			}
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					if(isalpha(v[i][j])||isdigit(v[i][j]))
					{
						char c=v[i][j]+1;
						if(v[i][j]=='9')
						c='a';
						if(v[i][j]=='z')
						c='A';
						if(m.count(c))
						{
							pair<int,int> p=m[c];
							if(i==p.fi)
							{
								for(int k=min(j,p.se)+1;k<max(j,p.se);k++)
								{
									if(v[i][k]=='.')
									v[i][k]='-';
									else if(v[i][k]=='|')
									v[i][k]='+';
								}
							}
							else
							{
								for(int k=min(i,p.fi)+1;k<max(i,p.fi);k++)
								{
									if(v[k][j]=='.')
									v[k][j]='|';
									else if(v[k][j]=='-')
									v[k][j]='+';
								}
							}
						}
					}
				}
			}
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<v[i][j];
				}
				cout<<"\n";
			}
}
int main()
{
	fast
	vector<string> v;
	string s;
	while(getline(cin,s))
	{
		if(s=="")
		{
			go(v);
			v.clear();
			cout<<"\n";
		}
		else
		v.pb(s);
	}
	go(v);
	return 0;
}

