#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define y cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
       ll l=1,r=INT_MAX,mid,ans;
       while(l<=r)
       {
        mid=(l+r)/2;
        ll x=mid-mid/n;
        if(x>=k)
        {
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
        }
       }
       cout<<ans<<"\n";
    }
    return 0;
}