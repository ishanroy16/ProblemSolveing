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
    int b=0,ans=0;
    for(int i=1;i<=9;i++)
    {
        b=b*10+1;
        for(int j=1;j<=9;j++){
            if(j*b<=n){
                ans++;
            }
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