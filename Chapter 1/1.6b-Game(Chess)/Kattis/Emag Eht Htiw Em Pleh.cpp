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
//	fast
	char c[17][33];
	int q=0,w=0,y=1;
	for(int i=0;i<17;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<33;j++)
			{
				if(j%4==0)
				c[i][j]='+';
				else
				c[i][j]='-';
			}
		}
		else
		{
			if(q==0)
			{
				for(int j=0;j<33;j++)
				{
					if(j%4==0)
					c[i][j]='|';
					else
					{
						if(w==0)
						{
							for(int k=0;k<3;k++)
							c[i][j+k]='.';
						}
						else
						{
							for(int k=0;k<3;k++)
							c[i][j+k]=':';
						}
						w^=1;
						j+=2;
					}
				}
			}
			else
			{
				for(int j=0;j<33;j++)
				{
					if(j%4==0)
					c[i][j]='|';
					else
					{
						if(y==0)
						{
							for(int k=0;k<3;k++)
							c[i][j+k]='.';
						}
						else
						{
							for(int k=0;k<3;k++)
							c[i][j+k]=':';
						}
						y^=1;
						j+=2;
					}
				}
			}
			q^=1;
		}
	}
	string s,s1;
	cin>>s>>s1;
	if(s1!="Black:")
	{
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==',')
			continue;
			if(s1[i]=='K'||s1[i]=='Q'||s1[i]=='R'||s1[i]=='B'||s1[i]=='N')
			{
				int cl=s1[i+1]-'a';
				int r=s1[i+2]-'0';
				c[17-(r*2)][cl*4+2]=s1[i];
				i+=2;
			}
			else if(s1[i]=='a'||s1[i]=='b'||s1[i]=='c'||s1[i]=='d'||s1[i]=='e'||s1[i]=='f'||
			s1[i]=='g'||s1[i]=='h')
			{
				int cl=s1[i]-'a';
				int r=s1[i+1]-'0';
				c[17-(r*2)][cl*4+2]='P';
				i++;
			}
		}
		cin>>s>>s1;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==',')
			continue;
			if(s1[i]=='K'||s1[i]=='Q'||s1[i]=='R'||s1[i]=='B'||s1[i]=='N')
			{
				int cl=s1[i+1]-'a';
				int r=s1[i+2]-'0';
				c[17-(r*2)][cl*4+2]=s1[i]+32;
				i+=2;
			}
			else if(s1[i]=='a'||s1[i]=='b'||s1[i]=='c'||s1[i]=='d'||s1[i]=='e'||s1[i]=='f'||
			s1[i]=='g'||s1[i]=='h')
			{
				int cl=s1[i]-'a';
				int r=s1[i+1]-'0';
				c[17-(r*2)][cl*4+2]='p';
				i++;
			}
		}
	}
	else
	{
		cin>>s1;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]==',')
			continue;
			if(s1[i]=='K'||s1[i]=='Q'||s1[i]=='R'||s1[i]=='B'||s1[i]=='N')
			{
				int cl=s1[i+1]-'a';
				int r=s1[i+2]-'0';
				c[17-(r*2)][cl*4+2]=s1[i]+32;
				i+=2;
			}
			else if(s1[i]=='a'||s1[i]=='b'||s1[i]=='c'||s1[i]=='d'||s1[i]=='e'||s1[i]=='f'||
			s1[i]=='g'||s1[i]=='h')
			{
				int cl=s1[i]-'a';
				int r=s1[i+1]-'0';
				c[17-(r*2)][cl*4+2]='p';
				i++;
			}
		}
	}
	for(int i=0;i<17;i++)
	{
		for(int j=0;j<33;j++)
		{
			cout<<c[i][j];
		}
		cout<<"\n";
	}
	return 0;
}

