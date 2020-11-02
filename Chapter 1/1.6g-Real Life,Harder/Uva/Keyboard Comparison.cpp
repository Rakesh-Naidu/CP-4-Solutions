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
map<char,pair<double,double> > q;
map<char,pair<double,double> > d;
double getminqd(char c)
{
	double mi=inf32;
	pair<double,double> d=q[c];
	// a
	pair<double,double> w=q['a'];
	double l=2*abs(d.fi-w.fi);
	double b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
//	cout<<mi<<"\n";
	w=q['s'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['d'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['f'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['j'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['k'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['l'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q[';'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	return mi;
}
double getminqs(char c)
{
	double mi=inf32;
	pair<double,double> d=q[c];
	// a
	pair<double,double> w=q['f'];
	double l=2*abs(d.fi-w.fi);
	double b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
//	cout<<mi<<"\n";
	w=q['g'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['h'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=q['j'];
	l=2*abs(d.fi-w.fi);
	b=2*abs(w.se-d.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	return mi;
}
double getmind(char c)
{
	double mi=inf32;
	pair<double,double> dr=d[c];
	// a
	pair<double,double> w=d['e'];
	double l=2*abs(dr.fi-w.fi);
	double b=2*abs(w.se-dr.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
//	cout<<mi<<"\n";
	w=d['h'];
	l=2*abs(dr.fi-w.fi);
	b=2*abs(w.se-dr.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=d['t'];
	l=2*abs(dr.fi-w.fi);
	b=2*abs(w.se-dr.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	
	w=d['d'];
	l=2*abs(dr.fi-w.fi);
	b=2*abs(w.se-dr.se);
	mi=min(mi,sqrt((l*l)+(b*b)));
	return mi;
}
void qwerty_d(string s)
{
	double sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '||q.count(s[i])==0)
		continue;
		sum+=getminqd(s[i]);
	}
	cout<<fixed<<setprecision(2)<<sum<<" ";
}
void qwerty_s(string s)
{
	double sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '||q.count(s[i])==0)
		continue;
		sum+=getminqs(s[i]);
	}
	cout<<fixed<<setprecision(2)<<sum<<" ";
}
void dvorak(string s)
{
	double sum=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==' '||d.count(s[i])==0)
		continue;
		sum+=getmind(s[i]);
	}
	cout<<fixed<<setprecision(2)<<sum<<"\n";
}
int main()
{
	string s;
	q['`']=make_pair(1,1);
	q['~']=make_pair(1,1);
	q['1']=make_pair(1,2);
	q['!']=make_pair(1,2);
	q['2']=make_pair(1,3);
	q['@']=make_pair(1,3);
	q['3']=make_pair(1,4);
	q['#']=make_pair(1,4);
	q['4']=make_pair(1,5);
	q['$']=make_pair(1,5);
	q['5']=make_pair(1,6);
	q['%']=make_pair(1,6);
	q['6']=make_pair(1,7);
	q['^']=make_pair(1,7);
	q['7']=make_pair(1,8);
	q['&']=make_pair(1,8);
	q['8']=make_pair(1,9);
	q['*']=make_pair(1,9);
	q['9']=make_pair(1,10);
	q['(']=make_pair(1,10);
	q['0']=make_pair(1,11);
	q[')']=make_pair(1,11);
	q['-']=make_pair(1,12);
	q['_']=make_pair(1,12);
	q['=']=make_pair(1,13);
	q['+']=make_pair(1,13);
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
	q['[']=make_pair(2,12);
	q['{']=make_pair(2,12);
	q[']']=make_pair(2,13);
	q['}']=make_pair(2,13);
	q['\\']=make_pair(2,14);
	q['|']=make_pair(2,14);
	q['a']=make_pair(3,2);
	q['s']=make_pair(3,3);
	q['d']=make_pair(3,4);
	q['f']=make_pair(3,5);
	q['g']=make_pair(3,6);
	q['h']=make_pair(3,7);
	q['j']=make_pair(3,8);
	q['k']=make_pair(3,9);
	q['l']=make_pair(3,10);
	q[';']=make_pair(3,11);
	q[':']=make_pair(3,11);
	q['\'']=make_pair(3,12);
	q['"']=make_pair(3,12);
	q['z']=make_pair(4,2);
	q['x']=make_pair(4,3);
	q['c']=make_pair(4,4);
	q['v']=make_pair(4,5);
	q['b']=make_pair(4,6);
	q['n']=make_pair(4,7);
	q['m']=make_pair(4,8);
	q[',']=make_pair(4,9);
	q['<']=make_pair(4,9);
	q['.']=make_pair(4,10);
	q['>']=make_pair(4,10);
	q['/']=make_pair(4,11);
	q['?']=make_pair(4,11);
	
	d['`']=make_pair(1,1);
	d['~']=make_pair(1,1);
    d['1']=make_pair(1,2);
    d['!']=make_pair(1,2);
    d['@']=make_pair(1,3);
    d['2']=make_pair(1,3);
    d['3']=make_pair(1,4);
    d['#']=make_pair(1,4);
    d['q']=make_pair(1,5);
    d['j']=make_pair(1,6);
    d['l']=make_pair(1,7);
    d['m']=make_pair(1,8);
    d['f']=make_pair(1,9);
    d['p']=make_pair(1,10);
    d['/']=make_pair(1,11);
    d['?']=make_pair(1,11);
    d['[']=make_pair(1,12);
    d['{']=make_pair(1,12);
    d[']']=make_pair(1,13);
    d['}']=make_pair(1,13);
    d['4']=make_pair(2,2);
    d['$']=make_pair(2,2);
    d['5']=make_pair(2,3);
    d['%']=make_pair(2,3);
    d['6']=make_pair(2,4);
    d['^']=make_pair(2,4);
    d['.']=make_pair(2,5);
    d['>']=make_pair(2,5);
    d['o']=make_pair(2,6);
    d['r']=make_pair(2,7);
    d['s']=make_pair(2,8);
    d['u']=make_pair(2,9);
    d['y']=make_pair(2,10);
    d['b']=make_pair(2,11);
    d[';']=make_pair(2,12);
    d[':']=make_pair(2,12);
    d['=']=make_pair(2,13);
    d['+']=make_pair(2,13);
    d['\\']=make_pair(2,14);
    d['|']=make_pair(2,14);
    d['7']=make_pair(3,2);
    d['&']=make_pair(3,2);
    d['8']=make_pair(3,3);
    d['*']=make_pair(3,3);
    d['9']=make_pair(3,4);
    d['(']=make_pair(3,4);
    d['a']=make_pair(3,5);
    d['e']=make_pair(3,6);
    d['h']=make_pair(3,7);
    d['t']=make_pair(3,8);
    d['d']=make_pair(3,9);
    d['c']=make_pair(3,10);
    d['k']=make_pair(3,11);
    d['-']=make_pair(3,12);
    d['_']=make_pair(3,12);
    d['0']=make_pair(4,2);
    d[')']=make_pair(4,2);
    d['z']=make_pair(4,3);
    d['x']=make_pair(4,4);
    d[',']=make_pair(4,5);
    d['<']=make_pair(4,5);
    d['i']=make_pair(4,6);
    d['n']=make_pair(4,7);
    d['w']=make_pair(4,8);
    d['v']=make_pair(4,9);
    d['g']=make_pair(4,10);
    d['\'']=make_pair(4,11);
    d['"']=make_pair(4,11);
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			s[i]=tolower(s[i]);
		}
		qwerty_d(s);
		qwerty_s(s);
		dvorak(s);
	}
	return 0;
}
