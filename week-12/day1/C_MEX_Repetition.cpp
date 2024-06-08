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
    vi a(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    vi v(n+1);
    for(int i=0;i<n;i++)
    {
        v[a[i]]=1;
    }
    for(int i=0;i<=n;i++)
    {
        if(!v[i])
        {
            a[n]=i;
            break;
        }
    }
    k%=(n+1);
    int ans[n+1];
    for(int i=0;i<=n;i++)
    {
        ans[(i+k)%(n+1)]=a[i];
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<nl;
}
int32_t main()
{
   ft;
   int t; 
   cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}