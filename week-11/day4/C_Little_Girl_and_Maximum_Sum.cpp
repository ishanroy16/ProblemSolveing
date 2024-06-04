#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int n,q;
   cin>>n>>q;
   vi a(n);
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   } 
   
   vi pre(n+1);
    for(int i=1;i<=q;i++)
    {
        int l,r; cin>>l>>r;
        // cout<<l<<" "<<r<<nl;
        l--,r--;
        pre[l]+=1;
        pre[r+1]-=1;
    }
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+pre[i];
    }
    sort(a.rbegin(),a.rend());
    sort(pre.rbegin(),pre.rend());
    int ans=0;
    for(int i=0;i<n;i++)
    {
       ans+=1ll*(pre[i]*a[i]);
    }
    cout<<ans<<"\n";
    return 0;
}