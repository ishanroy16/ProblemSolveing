#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n; cin>>n;
    int ans=0;
    int mn=INT_MAX;
    int l=n;
    for(int i=1;i<=sqrt(n);i++){
       ans=i-1+((n-i)+i-1)/i;
        mn=min(ans,mn);
       
    }
    cout<<mn<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    solve();
   } 
    return 0;
}