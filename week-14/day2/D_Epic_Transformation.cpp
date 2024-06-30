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
   int t; cin>>t; 
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int>mp;
    for(int i=0;i<n;i++) mp[a[i]]++;
    int mx=INT_MIN;
    for(auto [x,y]:mp)
    {
        if(mx<y) mx=y;
    }
    if(mx<=(n/2)){
        if(n%2==0) cout<<0<<nl;
        else cout<<1<<nl;
    }
    else{
        cout<<mx-(n-mx)<<nl;
    }
   }
    return 0;
}