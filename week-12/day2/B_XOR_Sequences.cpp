#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve()
{
    int a,b; cin>>a>>b;
    int d=a^b;
    int k=1;
    while(d%2==0)
    {
       d>>=1;
       k<<=1;
    }
    
    cout<<k<<nl;
    
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}