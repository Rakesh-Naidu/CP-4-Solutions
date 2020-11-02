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
void parent(string a,string b,map<string,bool> m)
{
	if(b=="AB+"||b=="AB-")
	{
		if(a=="AB+"||a=="AB-")
		{
			m["AB"]=true;
			m["A"]=true;
			m["B"]=true;
		}
		else if(a=="A+"||a=="A-")
		{
			m["B"]=true;
			m["AB"]=true;
		}
		else if(a=="B+"||a=="B-")
		{
			m["A"]=true;
			m["AB"]=true;
		}
		else if(a=="O-"||a=="O+")
		{
			cout<<"IMPOSSIBLE ";
			return;
		}
	}
	else if(b=="B+"||b=="B-")
	{
		if(a=="B+"||a=="B-")
		{
			m["B"]=true;
			m["AB"]=true;
			m["A"]=true;
			m["O"]=true;
		}
		else if(a=="A+"||a=="A-")
		{
			m["B"]=true;
			m["AB"]=true;
		}
		else if(a=="AB+"||a=="AB-")
		{
			m["AB"]=true;
			m["B"]=true;
			m["O"]=true;
			m["A"]=true;
		}
		else if(a=="O-"||a=="O+")
		{
			m["AB"]=true;
			m["B"]=true;
		}
	}
	else if(b=="A+"||b=="A-")
	{
		if(a=="B+"||a=="B-")
		{
			m["A"]=true;
			m["AB"]=true;
		}
		else if(a=="A+"||a=="A-")
		{
			m["A"]=true;
			m["AB"]=true;
			m["B"]=true;
			m["O"]=true;
		}
		else if(a=="AB+"||a=="AB-")
		{
			m["AB"]=true;
			m["B"]=true;
			m["O"]=true;
			m["A"]=true;
		}
		else if(a=="O-"||a=="O+")
		{
			m["AB"]=true;
			m["A"]=true;
		}
	}
	else if(b=="O+"||b=="O-")
	{
		if(a=="O-"||a=="O+")
		{
			m["O"]=true;
			m["A"]=true;
			m["B"]=true;
		}
		else if(a=="A+"||a=="A-")
		{
			m["A"]=true;
			m["O"]=true;
			m["B"]=true;
		}
		else if(a=="B+"||a=="B-")
		{
			m["A"]=true;
			m["B"]=true;
			m["O"]=true;
		}
		else if(a=="AB+"||a=="AB-")
		{
			cout<<"IMPOSSIBLE ";
			return;
		}
	}
	string ans="{";
	for(auto i:m)
	{
		if(i.se)
		{
			if(ans.size()>2)
			ans+=", ";
			string q=i.fi;
			if(a[a.size()-1]=='-'&&b[b.size()-1]=='+')
			ans+=q+='+';
			else
			{
				ans+=q;
				ans+="+, ";
				ans+=q;
				ans+="-";
			}
		}
	}
	ans+="}";
	cout<<ans<<" ";
}
void child(string a,string b,map<string,bool> m)
{
	if(a=="O-"&&b=="O-")
	{
		cout<<"O-\n";
		return;
	}
	else
	{
		if(a=="A+"||a=="A-")
		{
			if(b=="B+"||b=="B-")
			{
				m["O"]=true;
				m["A"]=true;
				m["B"]=true;
				m["AB"]=true;
			}
			else if(b=="A+"||b=="A-")
			{
				m["O"]=true;
				m["A"]=true;
			}
			else if(b=="AB+"||b=="AB-")
			{
				m["A"]=true;
				m["B"]=true;
				m["AB"]=true;
			}
			else
			{
				m["O"]=true;
				m["A"]=true;
			}
		}
		else if(a=="B+"||a=="B-")
        {
            if(b=="A+"||b=="A-")
            {
                m["O"]=true;
                m["A"]=true;
                m["B"]=true;
                m["AB"]=true;
            }
            else if(b=="B+"||b=="B-")
            {
                m["O"]=true;
                m["B"]=true;
            }
            else if(b=="AB+"||b=="AB-")
            {
                m["B"]=true;
                m["A"]=true;
                m["AB"]=true;
            }
            else
            {
                m["O"]=true;
                m["B"]=true;
            }
        }
        else if(a=="AB+"||a=="AB-")
        {
        	if(b=="A+"||b=="A-")
            {
                m["A"]=true;
                m["B"]=true;
                m["AB"]=true;
            }
            else if(b=="B+"||b=="B-")
            {
                m["A"]=true;
                m["B"]=true;
                m["AB"]=true;
            }
            else if(b=="AB+"||b=="AB-")
            {
                m["B"]=true;
                m["A"]=true;
                m["AB"]=true;
            }
            else
            {
                m["A"]=true;
                m["B"]=true;
            }
		}
		else
		{
			if(b=="A+"||b=="A-")
            {
                m["A"]=true;
                m["O"]=true;
            }
            else if(b=="B+"||b=="B-")
            {
                m["A"]=true;
                m["O"]=true;
            }
            else if(b=="AB+"||b=="AB-")
            {
                m["B"]=true;
                m["A"]=true;
            }
            else
            {
                m["O"]=true;
            }
		}
	}
	set<char> s;
	s.insert(a[a.size()-1]);
	s.insert(b[b.size()-1]);
	string ans="{";
	for(auto i:m)
	{
		if(i.se)
		{
			if(ans.size()>2)
			ans+=", ";
			string q=i.fi;
			if(s.size()==1&&*s.begin()=='-')
			ans+=q+='-';
			else
			{
				ans+=q;
				ans+="+, ";
				ans+=q;
				ans+="-";
			}
		}
	}
	ans+="}";
	cout<<ans<<" \n";
}
int main()
{
//	fast
	int cs=1;
	while(1)
	{
		string p1,p2,c;
		cin>>p1;
		map<string,bool> m;
		m["O"]=false;
		m["A"]=false;
		m["B"]=false;
		m["AB"]=false;
		if(p1=="E")
		break;
		else
		{
			cout<<"Case "<<cs++<<": ";
			cin>>p2>>c;
			if(p1=="?")
			{
				parent(p2,c,m);
			}
			else
			cout<<p1<<" ";
			if(p2=="?")
			{
				parent(p1,c,m);
			}
			else
			cout<<p2<<' ';
			if(c=="?")
			child(p1,p2,m);
			else
			cout<<c<<"\n";
		}
	}
	return 0;
}
