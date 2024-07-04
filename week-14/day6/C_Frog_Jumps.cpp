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
    string s; cin>>s;
    int sz=s.size();
    int ans=0,cnt=1;
    for(int i=0;i<sz;i++){
        if(s[i]=='L'){
            cnt++;
        }
        else{
            ans=max(ans,cnt);
            cnt=1;
        }
    }
    if(cnt>1){
        // cout<<cnt<<nl;
        ans=max(ans,cnt);
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