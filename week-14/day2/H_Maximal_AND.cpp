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
    vector<bitset<31>>B(n);
    for(int i=0;i<n;i++)
    {
        bitset<31>temp(a[i]);
        B[i]=temp;
    }
    int ans=0;
    for(int b=30;b>=0;b--)
    {
        int req=0;
        for(int i=0;i<n;i++)
        {
            // req+=(B[i][b]==0);
            if(B[i][b]==0) req++;
        }
        if(req<=k){
            ans+=(1<<b);
            k-=req;
        }
    }
    cout<<ans<<nl;
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