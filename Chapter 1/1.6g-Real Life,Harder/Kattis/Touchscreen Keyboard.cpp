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
bool comp(pair<int,string> a,pair<int,string> b)
{
	if(a.fi!=b.fi)
	return a.fi<b.fi;
	else
	return a.se<b.se;
}
int main()
{
	string s;
	map<char,pair<int,int> > q;
	q['q']=make_pair(2,2);
	q['w']=make_pair(2,3);
	q['e']=make_pair(2,4);
	q['r']=make_pair(2,5);
	q['t']=make_pair(2,6);
	q['y']=make_pair(2,7);
	q['u']=make_pair(2,8);
	q['i']=make_pair(2,9);
	q['o']=make_pair(2,10);
	q['p']=make_pair(2,11);
	
	q['a']=make_pair(3,2);
	q['s']=make_pair(3,3);
	q['d']=make_pair(3,4);
	q['f']=make_pair(3,5);
	q['g']=make_pair(3,6);
	q['h']=make_pair(3,7);
	q['j']=make_pair(3,8);
	q['k']=make_pair(3,9);
	q['l']=make_pair(3,10);
	
	q['z']=make_pair(4,2);
	q['x']=make_pair(4,3);
	q['c']=make_pair(4,4);
	q['v']=make_pair(4,5);
	q['b']=make_pair(4,6);
	q['n']=make_pair(4,7);
	q['m']=make_pair(4,8);
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int w;
		cin>>w;
		vector<pair<int,string> > m;
		while(w--)
		{
			string s1;
			cin>>s1;
			int sum=0;
			for(int i=0;i<s.size();i++)
			{
				sum+=abs(q[s1[i]].fi-q[s[i]].fi)+abs(q[s1[i]].se-q[s[i]].se);
			}
			m.pb({sum,s1});
		}
		sort(all(m),comp);
		for(auto i:m)
		cout<<i.se<<" "<<i.fi<<"\n";
	}
	return 0;
}
