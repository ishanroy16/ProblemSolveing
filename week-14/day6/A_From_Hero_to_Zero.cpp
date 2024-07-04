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
    int n,k; cin>>n>>k;
    int ans=0;
    while(n!=0){
        if(n%k==0){
            ans++;
            n/=k;
        }
        else{
            int m=n%k;
            ans+=m;
            n-=m;
        }
    }
    cout<<ans<<nl;
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