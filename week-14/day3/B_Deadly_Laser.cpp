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
    int n,m,x,y,d; cin>>n>>m>>x>>y>>d;
    if((x-d)<=1 && x+d>=n){
        cout<<-1<<nl;
    }
    else if(y-d<=1 && y+d>=m){
        cout<<-1<<nl;
    }
    else if(x-d<=1 && y-d<=1){
        cout<<-1<<nl;
    }
    else if(x+d>=n && y+d>=m)
    {
        cout<<-1<<nl;
    }
    else{
        cout<<n+m-2<<nl;
    }
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--) {
    solve();
   }
    return 0;
}