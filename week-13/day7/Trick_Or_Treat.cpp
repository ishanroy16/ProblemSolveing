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
    int n,m; cin>>n>>m;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    map<int,int>canRem;
    map<int,int>choRem;
   
    for(int i=0;i<n;i++)
    {
        int can=a[i]%m;
        int cho=b[i]%m;
        canRem[can]++;
        choRem[cho]++;
    }
    int cnt=0;
    for(auto [x,y]:canRem){
        int com=(m-x)%m;
        if(choRem.find(com)!=choRem.end()){
            cnt+=y*choRem[com];
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