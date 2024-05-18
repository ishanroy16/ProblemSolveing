#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   ll n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   map<int,int>cnt;
   int l=0,r=0;
   int ans=0;
   while(r<n)
   {
    while(cnt[a[r]]==0 && r<n)
    {
    cnt[a[r]]++;
    ans=max(ans,(r-l+1));
    // cout<<ans<<nl;
    // cout<<r<<" "<<l<<nl;
    r++;

    }
    cnt[a[l]]--;
    l++;
   }
   cout<<ans<<nl;
    return 0;
}