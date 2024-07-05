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
   int t; cin>>t;
   while(t--){
    int a,b; cin>>a>>b;
    int ans;
    if(b%a==0){
        ans=b*(b/a);
    }
    else{
        ans=b*(a/__gcd(a,b));
    }
    cout<<ans<<nl;
   } 
    return 0;
}