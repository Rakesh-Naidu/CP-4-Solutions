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
	vi a(14,0);
	for(int i=0;i<5;i++)
	{
		string s;
		cin>>s;
		if(s[0]=='A')
		a[1]++;
		else if(s[0]=='2')
		a[2]++;
		else if(s[0]=='3')
		a[3]++;
		else if(s[0]=='4')
		a[4]++;
		else if(s[0]=='5')
		a[5]++;
		else if(s[0]=='6')
		a[6]++;
		else if(s[0]=='7')
		a[7]++;
		else if(s[0]=='8')
		a[8]++;
		else if(s[0]=='9')
		a[9]++;
		else if(s[0]=='T')
		a[10]++;
		else if(s[0]=='J')
		a[11]++;
		else if(s[0]=='Q')
		a[12]++;
		else if(s[0]=='K')
		a[13]++;
	}
	cout<<*max_element(all(a))<<"\n";
	return 0;
}

