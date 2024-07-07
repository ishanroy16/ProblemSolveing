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
    if(n%2==1){
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
    }
    else{
        cout<<1<<" "<<3<<" ";
        for(int i=0;i<n-2;i++){
            cout<<2<<" ";
        }
    }
    cout<<nl;
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