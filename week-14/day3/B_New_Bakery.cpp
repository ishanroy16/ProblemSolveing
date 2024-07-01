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
    int n,a,b;  cin>>n>>a>>b;
    int ans=0;
    if(b>a){
        ans=b*(b+1)/2;
        int k=b-a;
        if(k>n) k=n;
        int m=b-k;
        ans-=(m*(m+1))/2;
        int l=n-k;
        ans+=l*a;
       
    }
    else{
        ans=a*n;
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