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
	vector<int> v;
	for(int i=1;i<n+1;i++)
	{   
        if(i==1)
        {   cout<<"0\n";
        }else
        if(i==2)
        {   cout<<"6\n";
        }else
        {
		    int temp = ((i*i)*((i*i)-1)/2) - 4*(i-1)*(i-2);
            cout<<temp<<"\n";
        }
    }
} 
 
signed main(){
	fastio
//	test
	solve();
	r0;
}