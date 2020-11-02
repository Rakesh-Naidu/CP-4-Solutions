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
		int ar[5][5]={0};
		int row[6],col[6],di1=1,di2=1;
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));
		unordered_map<int,pair<int,int> > m;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(i==2&&j==2)
				{
					ar[i][j]=-1;
					continue;
				}
				cin>>ar[i][j];
				m.insert(make_pair(ar[i][j],make_pair(i,j)));
			}
		}
		row[2]=1;
		col[2]=1;
		vi num(75);
		for(int i=0;i<75;i++)
		{
			cin>>num[i];
		}
		for(int i=0;i<75;i++)
		{
			bool f=false;
			int r=num[i];
			if(m.find(r)!=m.end())
			{
				if(m[r].fi==m[r].se)
				{
					di1++;
				}
				else if(m[r].fi+m[r].se==4)
				{
					di2++;
				}
				row[m[r].fi]++;
				col[m[r].se]++;
			}
			if(di1==5||di2==5)
			f=true;
			for(int j=0;j<5;j++)
			{
				if(row[j]==5||col[j]==5)
				{
					f=true;
					break;
				}
			}
			if(f)
			{
				cout<<"BINGO after "<<i+1<<" numbers announced\n";
				break;
			}
		}
	}
	return 0;
}

