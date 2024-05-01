#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);

    ll n,x,y;
    cin>>n>>x>>y;
    ll l=1,r=max(x,y)*n,ans,mid;
    auto ok=[&](ll m)
    {
        if(m<min(x,y))
        {
            return false;
        }
        ll total=1;
        m-=min(x,y);
        total+=m/x;
        total+=m/y;
        if(total>=n) return true;
        return false;
    };
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<"\n";
    return 0;
}