#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int n,k; cin>>n>>k;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   vi ans;
   ans.pb(a[0]);
   for(int i=1;i<n;i++){
    auto it=find(ans.begin(),ans.end(),a[i]);
    if(it!=ans.end()){

    }
    else{
        ans.pb(a[i]);
    }
    if(ans.size()>k){
        auto it=ans.begin();
        ans.erase(it);
    }
   }
   reverse(ans.begin(),ans.end());
   cout<<ans.size()<<nl;
   for(int val:ans) cout<<val<<" ";

    return 0;
}