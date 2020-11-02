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
double eps=1e-3;
int main()
{
	fast
	int t;
	double r,b,m;
	cin >> t;
	while(t--) {
		double r,b,m;
		cin>>r>>b>>m;
		r/=100;
		bool paid = false;
		for(int i = 1; i <= 1200; i++) {
			double interest = b * r;
			interest = round(interest * 100) / 100;
			// rounding off to paisas
			b += interest;
			b = round(b * 100) / 100;
			// rounding off to paisas
			b -= m;
			if (b < eps) {
				cout << i << endl;
				paid = true;
				break;
			}
		}
		if(!paid)cout << "impossible\n";
	}
	return 0;
}
