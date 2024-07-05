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
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   vi b1,b2;
   int cnt=1;
   for(int i=1;i<n;i++)
   {
    if(a[i]==a[i-1]){
        cnt++;
    }
    else{
        b1.pb(cnt);
        cnt=1;
    }
   }
   if(cnt>1) b1.pb(cnt);
   if(b1.size()==1){
    cout<<2<<nl;
   }
   else{
    int ans=0;
//    for(int val:b1) cout<<val<<" ";
   for(int i=1;i<b1.size();i++){
    int m=min(b1[i],b1[i-1]);
    ans=max(ans,2*m);
   }
   cout<<ans<<nl;
   }
    return 0;
}