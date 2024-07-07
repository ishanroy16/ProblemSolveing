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
    string a,b,c; cin>>a>>b>>c;
    bool f=false;
    for(int i=0;i<n;i++){
        if(c[i]!=a[i] && c[i]!=b[i]){
            f=true;
            break;
        }
    }
    if(f) cout<<"YES"<<nl;
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