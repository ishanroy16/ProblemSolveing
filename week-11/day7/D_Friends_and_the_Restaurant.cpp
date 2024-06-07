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
    vi x(n),y(n);
    for(int i=0;i<n;i++) cin>>x[i];
    for(int i=0;i<n;i++) cin>>y[i];
    vi b;
    for(int i=0;i<n;i++)
    {
        b.pb(y[i]-x[i]);
    }
    sort(b.rbegin(),b.rend());
    // for(int val:b) cout<<val<<" ";
    int l=0,r=n-1,cnt=0;
    while(l<r)
    {
        if((b[l]+b[r])>=0)
        {
            cnt++;
            l++;
            r--;
        }
        else{
            r--;
        }
    }
    cout<<cnt<<nl;
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