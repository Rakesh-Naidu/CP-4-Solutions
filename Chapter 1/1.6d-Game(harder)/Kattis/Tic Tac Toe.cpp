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
char arr[3][3];
bool checkChar (char ch)
{
    if(arr[0][0] == ch && arr[0][1] == ch &&  arr[0][2] == ch) return false;
    if(arr[1][0] == ch && arr[1][1] == ch &&  arr[1][2] == ch) return false;
    if(arr[2][0] == ch && arr[2][1] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][0] == ch && arr[1][0] == ch &&  arr[2][0] == ch) return false;
    if(arr[0][1] == ch && arr[1][1] == ch &&  arr[2][1] == ch) return false;
    if(arr[0][2] == ch && arr[1][2] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][0] == ch && arr[1][1] == ch &&  arr[2][2] == ch) return false;
    if(arr[0][2] == ch && arr[1][1] == ch &&  arr[2][0] == ch) return false;
    return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x=0,o=0;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]=='X')
				x++;
				else if(arr[i][j]=='O')
				o++;
			}
		}
		bool f;
		if(o==x) f=checkChar('X');
		else if(o+1==x) f=checkChar('O');
		else f=false;
		f?cout<<"yes\n":cout<<"no\n";
	}
	return 0;
}
/*
1. At first count O and count X if count O>count X then print "no" and continue.
2. Check is X win and is O win 
----if both X and O win then print "no"
----if X win and count X is not greater than count O then print "no"
----if O win and count O is not equal count X then print "no"
----otherwise print "yes"
~~~~~ Above code is reverse of this strategy ~~~~~
*/
