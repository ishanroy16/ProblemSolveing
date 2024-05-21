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
   ll n,s; cin>>n>>s;
   vi a(n);
   for(ll i=0;i<n;i++) cin>>a[i];
   ll l=0,r=0,sum=0,cnt=0;
   while(r<n)
   {
    sum+=a[r];
    while(sum>=s)
    {
        if(sum==s)
        {
            cnt++;
        }
        sum-=a[l];
        l++;
    }
    r++;
   }
   cout<<cnt<<nl;
    return 0;
}