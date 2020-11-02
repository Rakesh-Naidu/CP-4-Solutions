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
	while(1)
	{
		int n;
		cin>>n;
		if(n==0)
		break;
		int pg=ceil((double)n/4);
		int arr[pg*4+1];
		memset(arr,0,sizeof(arr));
		for(int i=1;i<=n;i++)
		{
			arr[i]=i;
		}
		int l=1,r=pg*4;
		cout<<"Printing order for "<<n<<" pages:\n";
		int w=0;
		for(int i=1;i<=pg;)
		{
			if(w==0)
			{
				cout<<"Sheet "<<i<<", front: ";
				if(arr[r]==0)
				{
					cout<<"Blank, ";
					r--;
				}
				else
				cout<<r--<<", ";
				if(arr[l]==0)
				{
					cout<<"Blank\n";
					l++;
				}
				else
				cout<<l++<<"\n";
			}
			else
			{
				cout<<"Sheet "<<i<<", back : ";
				if(arr[l]==0)
				{
					cout<<"Blank, ";
					l++;
				}
				else
				cout<<l++<<", ";
				if(arr[r]==0)
				{
					cout<<"Blank\n";
					r--;
				}
				else
				cout<<r--<<"\n";
				i++;
			}
			w^=1;
			if((arr[l]==0&&arr[r]==0))
			break;
		}
	}
	return 0;
}
