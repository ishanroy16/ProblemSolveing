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
    int ans=0;
    int pos=0,neg=INT_MIN;
    bool f=false;
    bool f2=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            if(f2){
                ans+=neg;
                // cout<<neg<<"a"<<nl;
                neg=INT_MIN;
                f2=false;
            }
            f=true;
            if(a[i]>pos)
            {
                pos=a[i];
            }
        }
        else{
            if(f) {
                ans+=pos;
                // cout<<pos<<"b"<<nl;
                pos=0;
                f=false;
            }
            if(a[i]>neg)
            {
                f2=true;
                neg=a[i];
            }
        }
    }
    if(pos!=0)
    {
        ans+=pos;
    }
    if(neg!=INT_MIN) ans+=neg;
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