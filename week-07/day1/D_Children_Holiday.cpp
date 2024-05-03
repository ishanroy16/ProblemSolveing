#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define vi vector<ll>
int main()
{
    int m,n;
    cin>>m>>n;
    vector<tuple<int,int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        int t,z,y;
        cin>>t>>z>>y;
        a[i]=make_tuple(t,z,y);
    }
    int l=0,r=1e8,mid,ans=0;
    vector<int>can(n);
    auto ok=[&](ll mid)
    {
        vector<int>may(n);
        int has=m;
        for(int i=0;i<n;i++)
        {
            tuple<int,int,int>T=a[i];
            int t,z,y,can,curr,total,remaining;
            t=get<0>(T);
            z=get<1>(T);
            y=get<2>(T);
            total=(z*t)+y;
            can=mid/total;
            remaining=(mid%total);
            curr=((can*z)+min(z,remaining/t));
            curr=min(has,curr);
            has-=curr;
            may[i]=curr;
        }
        if(!has)
        {
            for(int i=0;i<n;i++)
            {
                can[i]=may[i];
            }
        }
        return (!has);
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
    for(int val:can)
    {
        cout<<val<<" ";
    }
    return 0;
}