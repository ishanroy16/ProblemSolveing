#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
map<pair<pair<int,int>,int>,int>two,three;
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    int a[n];
    for(int i=1;i<=n;i++) cin>>a[i];
    int ans=0;
    two.clear();
    three.clear();
    for(int i=3;i<=n;i++){
        int tmp=three[{{a[i],a[i-1]},a[i-2]}];
        ans+=two[{{0,a[i-1]},a[i-2]}]-tmp;
        ans+=two[{{a[i],0},a[i-2]}]-tmp;
        ans+=two[{{a[i],a[i-1]},0}]-tmp;
        two[{{0,a[i-1]},a[i-2]}]++;
        two[{{a[i],0},a[i-2]}]++;
        two[{{a[i],a[i-1]},0}]++;
        three[{{a[i],a[i-1]},a[i-2]}]++;
        
    }
    cout<<ans<<nl;
   } 
    return 0;
}