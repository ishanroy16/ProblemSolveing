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
   map<int,int>mp;
   for(int i=1;i<=n;i++)
   {
    int l,r; cin>>l>>r;
    mp[l]++;
    mp[r+1]--;
   }
    int sum=0;
    bool f=true;
    for(auto [key,val]:mp)
    {
        sum+=val;
        if(sum>2)
        {
            f=false;
            break;
        }
    }
    if(f) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
   
    return 0;
}