#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int n,t; cin>>n>>t;
    vector<int>ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    auto ok =[&](ll m)
    {
        ll total=0;
        for(int i=0;i<n;i++)
        {
            total+=(m/ar[i]);
            if(total>=t)
            {
                return true;
            }
        }
        return false;
    };
    ll l=0,r=1e18,ans,mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}