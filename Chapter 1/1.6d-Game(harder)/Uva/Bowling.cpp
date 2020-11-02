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
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
int getsp(string s,int i);
int getst(string s,int i)
{
	int sum=0;
	if(s[i+4]=='/')
	return 10;
	else
	for(int w=i+2;w<i+5;w+=2)
	{
		if(s[w]=='X')
		sum+=10;
		else
		sum+=s[w]-'0';
	}
//	cout<<"getst "<<sum<<"\n";
	return sum;
}
int getsp(string s,int i)
{
	int sum=0;
	if(s[i+2]=='X')
	{
		sum+=10;
	}
	else
	sum+=s[i+2]-'0';
//	cout<<"getsp "<<sum<<"\n";
	return sum;
}
int main()
{
	fast
	string s;
	while(getline(cin,s))
	{
		if(s=="Game Over")
		break;
		int sum=0,f=0,ct=0;
		for(int i=0;i<s.size();i+=2)
		{
			if(s[i]=='/')
			{//
				sum+=(10-(s[i-2]-'0'));
				sum+=getsp(s,i);
				f++;
				ct=0;
			}
			else if(s[i]=='X')
			{
				sum+=10;
				sum+=getst(s,i);
				f++;
				ct=0;
			}
			else
			{
				sum+=s[i]-'0';
				ct++;
				if(ct==2)
				{
					f++;
					ct=0;
				}
			}
			if(f==10)
			break;
//			cout<<i<<" "<<sum<<" "<<f<<"\n";
		}
		cout<<sum<<"\n";
	}
	return 0;
}
