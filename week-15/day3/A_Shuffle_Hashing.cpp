#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    string p,h; cin>>p>>h;
    int n=p.size();
    int m=h.size();
    sort(p.begin(),p.end());
    string ans="";
    bool ok=false;
    int l=0,r=0;
    while(r<m){
        ans+=h[r];
        if(r-l+1==n){
            string ss=ans;
            sort(ans.begin(),ans.end());
            // cout<<ans<<nl;
            if(p==ans){
                ok=true;
                break;
            }
            else{
                ss.erase(0,1);
                ans=ss;
                l++;
            }
        }
        r++;
    }
    if(ok) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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