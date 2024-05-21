#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<ll>
int main()
{
   ft;
  ll n,x; cin>>n>>x;
   map<ll,ll>mp;
   ll sum=0,cnt=0;
   mp[sum]++;
   for(int i=0;i<n;i++)
   {
    ll a; cin>>a;
    sum+=a;
    if(mp[sum-x])
    {
        cnt+=mp[sum-x];
    }
    mp[sum]++;
   }
    cout<<cnt<<"\n";
    return 0;
}