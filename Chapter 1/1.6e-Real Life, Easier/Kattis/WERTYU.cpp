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
char get(char c)
{
	if(c==' ')
	return ' ';
	if(c=='1')
	return '`';
	if(c=='2')
	return '1';
	if(c=='3')
	return '2';
	if(c=='4')
	return '3';
	if(c=='5')
	return '4';
	if(c=='6')
	return '5';
	if(c=='7')
	return '6';
	if(c=='8')
	return '7';
	if(c=='9')
	return '8';
	if(c=='0')
	return '9';
	if(c=='-')
	return '0';
	if(c=='=')
	return '-';
	
	if(c=='W')
	return 'Q';
	if(c=='E')
	return 'W';
	if(c=='R')
	return 'E';
	if(c=='T')
	return 'R';
	if(c=='Y')
	return 'T';
	if(c=='U')
	return 'Y';
	if(c=='I')
	return 'U';
	if(c=='O')
	return 'I';
	if(c=='P')
	return 'O';
	if(c=='[')
	return 'P';
	if(c==']')
	return '[';
	if(c=='\\')
	return ']';
	
	if(c=='S')
	return 'A';
	if(c=='D')
	return 'S';
	if(c=='F')
	return 'D';
	if(c=='G')
	return 'F';
	if(c=='H')
	return 'G';
	if(c=='J')
	return 'H';
	if(c=='K')
	return 'J';
	if(c=='L')
	return 'K';
	if(c==';')
	return 'L';
	if(c=='\'')
	return ';';
	
	if(c=='X')
	return 'Z';
	if(c=='C')
	return 'X';
	if(c=='V')
	return 'C';
	if(c=='B')
	return 'V';
	if(c=='N')
	return 'B';
	if(c=='M')
	return 'N';
	if(c==',')
	return 'M';
	if(c=='.')
	return ',';
	if(c=='/')
	return '.';
}
int main()
{
	fast
	string s;
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
		cout<<get(s[i]);
		}
		cout<<"\n";
	}
	return 0;
}
