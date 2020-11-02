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
	char s[100];
	while(scanf("%s",s)==1)
	{
		int pos[10][10];
		memset(pos,0,sizeof(pos));
		int p=1;
		int r=1;
		for(int i=0;s[i]!='\0';i++)
		{
			if(isdigit(s[i]))
			{
				p+=s[i]-'0';
			}
			if(islower(s[i])||isupper(s[i]))
			{
				pos[r][p]=2;
				p++;
			}
			if(s[i]=='/')
			{
				r++;
				p=1;
			}
		}
		p=1;
		r=1;
		for(int i=0;s[i]!='\0';i++)
		{
			if(isdigit(s[i]))
			p+=s[i]-'0';
			if(islower(s[i])||isupper(s[i]))
			{
				// cout<<i<<" ";
				if(s[i]=='k'||s[i]=='K')
				{
					if(pos[r][p+1]==0)
					pos[r][p+1]=1;
					if(pos[r][p-1]==0)
					pos[r][p-1]=1;
					if(pos[r-1][p]==0)
					pos[r-1][p]=1;
					if(pos[r+1][p]==0)
					pos[r+1][p]=1;
					if(pos[r-1][p-1]==0)
					pos[r-1][p-1]=1;
					if(pos[r+1][p-1]==0)
					pos[r+1][p-1]=1;
					if(pos[r-1][p+1]==0)
					pos[r-1][p+1]=1;
					if(pos[r+1][p+1]==0)
					pos[r+1][p+1]=1;
				}
				else if(s[i]=='q'||s[i]=='Q')
				{
					for(int a=r+1;a<10;a++)
					{
						if(pos[a][p]==2)
						break;
						else if(pos[a][p]==0)
						pos[a][p]=1;
					}
					for(int a=r-1;a>=0;a--)
					{
						if(pos[a][p]==2)
						break;
						else if(pos[a][p]==0)
						pos[a][p]=1;
					}
					for(int a=p-1;a>=0;a--)
					{
						if(pos[r][a]==2)
						break;
						else if(pos[r][a]==0)
						pos[r][a]=1;
					}
					for(int a=p+1;a<10;a++)
					{
						if(pos[r][a]==2)
						break;
						else if(pos[r][a]==0)
						pos[r][a]=1;
					}
					int l=p+1;
					for(int a=r+1;a<10;a++)
					{
						if(pos[a][l]==2)
						break;
						else if(pos[a][l]==0)
						pos[a][l]=1;
						l++;
						if(l>9)
						break;
					}
					l=p-1;
					for(int a=r-1;a>=0;a--)
					{
						if(pos[a][l]==2)
						break;
						else if(pos[a][l]==0)
						pos[a][l]=1;
						l--;
						if(l<0)
						break;
					}
					l=r+1;
					for(int a=p-1;a>=0;a--)
					{
						if(pos[l][a]==2)
						break;
						else if(pos[l][a]==0)
						pos[l][a]=1;
						l++;
						if(l>9)
						break;
					}
					l=r-1;
					for(int a=p+1;a<10;a++)
					{
						if(pos[l][a]==2)
						break;
						else if(pos[l][a]==0)
						pos[l][a]=1;
						l--;
						if(l<0)
						break;
					}
				}
				else if(s[i]=='r'||s[i]=='R')
				{
					for(int a=r+1;a<10;a++)
					{
						if(pos[a][p]==2)
						break;
						else if(pos[a][p]==0)
						pos[a][p]=1;
					}
					for(int a=r-1;a>=0;a--)
					{
						if(pos[a][p]==2)
						break;
						else if(pos[a][p]==0)
						pos[a][p]=1;
					}
					for(int a=p-1;a>=0;a--)
					{
						if(pos[r][a]==2)
						break;
						else if(pos[r][a]==0)
						pos[r][a]=1;
					}
					for(int a=p+1;a<10;a++)
					{
						if(pos[r][a]==2)
						break;
						else if(pos[r][a]==0)
						pos[r][a]=1;
					}
				}
				else if(s[i]=='b'||s[i]=='B')
				{
					int l=p+1;
					for(int a=r+1;a<10;a++)
					{
						if(pos[a][l]==2)
						break;
						else if(pos[a][l]==0)
						pos[a][l]=1;
						l++;
						if(l>9)
						break;
					}
					l=p-1;
					for(int a=r-1;a>=0;a--)
					{
						if(pos[a][l]==2)
						break;
						else if(pos[a][l]==0)
						pos[a][l]=1;
						l--;
						if(l<0)
						break;
					}
					l=r+1;
					for(int a=p-1;a>=0;a--)
					{
						if(pos[l][a]==2)
						break;
						else if(pos[l][a]==0)
						pos[l][a]=1;
						l++;
						if(l>9)
						break;
					}
					l=r-1;
					for(int a=p+1;a<10;a++)
					{
						if(pos[l][a]==2)
						break;
						else if(pos[l][a]==0)
						pos[l][a]=1;
						l--;
						if(l<0)
						break;
					}
				}
				else if(s[i]=='p')
				{
					if(pos[r+1][p-1]==0)
					pos[r+1][p-1]=1;
					if(pos[r+1][p+1]==0)
					pos[r+1][p+1]=1;
				}
				else if(s[i]=='P')
				{
					if(pos[r-1][p-1]==0)
					pos[r-1][p-1]=1;
					if(pos[r-1][p+1]==0)
					pos[r-1][p+1]=1;
				}
				else
				{
					if((r-1>=0&&p-2>=0)&&pos[r-1][p-2]==0)
					pos[r-1][p-2]=1;
					if((r-1>=0&&p+2<10)&&pos[r-1][p+2]==0)
					pos[r-1][p+2]=1;
					if((r-2>=0&&p-1>=0)&&pos[r-2][p-1]==0)
					pos[r-2][p-1]=1;
					if((r-2>=0&&p+1<10)&&pos[r-2][p+1]==0)
					pos[r-2][p+1]=1;
					if((r+1<10&&p-2>=0)&&pos[r+1][p-2]==0)
					pos[r+1][p-2]=1;
					if((r+1<10&&p+2<10)&&pos[r+1][p+2]==0)
					pos[r+1][p+2]=1;
					if((r+2<10&&p-1>=0)&&pos[r+2][p-1]==0)
					pos[r+2][p-1]=1;
					if((r+2<10&&p+1<10)&&pos[r+2][p+1]==0)
					pos[r+2][p+1]=1;
				}
				p++;
			}
			if(s[i]=='/')
			{
				r++;
				p=1;
			}
		}
		int ct=0;
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				// cout<<pos[i][j]<<" ";
				if(i!=0&&j!=0)
				{
					if(pos[i][j]==0)
					ct++;
				}
			}
			// cout<<"\n";
		}
		cout<<ct<<"\n";
	}
	return 0;
}
