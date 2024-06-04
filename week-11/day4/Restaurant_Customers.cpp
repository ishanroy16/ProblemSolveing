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
   int mx=0;
    for(auto [key,val]:mp)
    {
        sum+=val;
        mx=max(mx,sum);
    }
    
    cout<<mx<<nl;
   
    return 0;
}