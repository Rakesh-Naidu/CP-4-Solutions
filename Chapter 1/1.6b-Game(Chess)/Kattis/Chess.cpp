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
		int n1,n2;
		char c1,c2;
		cin>>c1>>n1>>c2>>n2;
		if(c1==c2&&n1==n2)
		cout<<0<<" "<<c1<<" "<<n1<<"\n";
		else
		{
			int r1=8-n1,cl1=c1-'A';
			int r2=8-n2,cl2=c2-'A';
//			cout<<r1<<" "<<cl1<<" "<<r2<<" "<<cl2<<"\n";
			int l=cl1+1;
			set<pair<int,int> > s1;
			for(int a=r1+1;a<8;a++)
			{
				if(l>7)
				break;
				s1.insert(make_pair(a,l));
				l++;
			}
			l=cl1-1;
			for(int a=r1-1;a>=0;a--)
			{
				if(l<0)
				break;
				s1.insert(make_pair(a,l));
				l--;
			}
			l=r1+1;
			for(int a=cl1-1;a>=0;a--)
			{
				if(l>7)
				break;
				s1.insert(make_pair(l,a));
				l++;
			}
			l=r1-1;
			for(int a=cl1+1;a<8;a++)
			{
				if(l<0)
				break;
				s1.insert(make_pair(l,a));
				l--;
			}
//			for(auto i:s1)
//			cout<<i.fi<<" "<<i.se<<"\n";
//			cout<<"\n";
			l=cl2+1;
			set<pair<int,int> > s2;
			for(int a=r2+1;a<8;a++)
			{
				if(l>7)
				break;
				s2.insert(make_pair(a,l));
				l++;
			}
			l=cl2-1;
			for(int a=r2-1;a>=0;a--)
			{
				if(l<0)
				break;
				s2.insert(make_pair(a,l));
				l--;
			}
			l=r2+1;
			for(int a=cl2-1;a>=0;a--)
			{
				if(l>7)
				break;
				s2.insert(make_pair(l,a));
				l++;
			}
			l=r2-1;
			for(int a=cl2+1;a<8;a++)
			{
				if(l<0)
				break;
				s2.insert(make_pair(l,a));
				l--;
			}
			bool done=false;
			for(auto i:s1)
			{
				if(i.fi==r2&&i.se==cl2)
				{
					cout<<1<<" "<<c1<<" "<<n1<<" "<<c2<<" "<<n2<<"\n";
					done=true;
				}
			}
			if(done)
			continue;
			bool f=false;
			for(auto i:s1)
			{
				if(s2.find(i)!=s2.end())
				{
					cout<<2<<" "<<c1<<" "<<n1<<" "<<char(i.se+'A')<<" "<<8-i.fi<<" "<<c2<<" "<<n2<<'\n';
					f=true;
					break;
				}
			}
			if(f)
			continue;
			cout<<"Impossible\n";
		}
	}
	return 0;
}

