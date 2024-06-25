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
    vi s,e;
    int q=n;
    while(q--)
    {
        int x,y; cin>>x>>y;
        s.pb(x);
        e.pb(y);
    }
    int w=s[0];
    // cout<<w;
    bool ok=true;
    for(int i=1;i<n;i++)
    {
        if(s[i]>=s[0] && e[i]>=e[0]){
            ok=false;
        }
    }
    if(ok){
        cout<<s[0]<<nl;
    }
    else{
        cout<<-1<<nl;
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