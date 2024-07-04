#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   string s,t; cin>>s>>t;
   int n=s.size(),m=t.size();
   int ans=n+m;
   for(int i=0;i<min(n,m);i++){
    if(s[n-i-1]==t[m-i-1]){
        ans-=2;
    }
    else break;
   } 
   cout<<ans<<nl;
    return 0;
}