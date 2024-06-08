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
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int zero=0,nonZero=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) zero++;
        else nonZero++;
    }
    if(zero==0)
    {
        cout<<0<<nl;
    }
    else if(nonZero>=zero-1){
        cout<<0<<nl;
    }
    else{
        int mx=*max_element(a.begin(),a.end());
        if(mx==1) {
            cout<<2<<nl;
        }
        else{
            cout<<1<<nl;
        }
    }
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