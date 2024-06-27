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
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt_v=1;
    for(int i=0;i<n;i++){
        if(a[i]==cnt_v) cnt_v++;
    }
    cout<<(n-cnt_v+k)/k<<nl;
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