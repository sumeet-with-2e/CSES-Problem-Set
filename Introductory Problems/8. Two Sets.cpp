/*
Author : Sumeet Pachauri
Codeforces : sumeet_4275
CodeChef : kaalbhairav01 
________________________________________
█─▄▄▄▄█▄─██─▄█▄─▀█▀─▄█▄─▄▄─█▄─▄▄─█─▄─▄─█
█▄▄▄▄─██─██─█#█─█▄█─█#█─▄█▀██─▄█▀███─███
▀▄▄▄▄▄▀▀▄▄▄▄▀▀▄▄▄▀▄▄▄▀▄▄▄▄▄▀▄▄▄▄▄▀▀▄▄▄▀▀
*/
 
#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define fastio			  ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define r0                return 0
#define test			  int T; cin>>T; while(T--)
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll
#define mod				  1000000007
 
void solve()
{ 	
	int n;
    cin>>n;
	int req = (n*(n+1))/2;
    if(req%2!=0)
	{
		cout<<"NO\n";
	}else
	{	req = req/2;
		vector<int> v1, v2;
		int f=0, sum1=0, sum2=0;
		for(int i=n;i>0;i--)
		{
			if(sum1+i<=req)
			{
				v1.pb(i);
				sum1+=i;
			}else
			{
				v2.pb(i);
				sum2+=i;
			}
		}
		if(sum1==sum2)
		{
			cout<<"YES\n";
			cout<<v1.size()<<"\n";
			rep(i,0,v1.size())cout<<v1[i]<<" ";
			cout<<"\n";
			cout<<v2.size()<<"\n";
			rep(i,0,v2.size())cout<<v2[i]<<" ";
			cout<<"\n";
		}else
		cout<<"NO\n";
	}
} 
 
signed main(){
	fastio
//	test
	solve();
	r0;
}