#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define y cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vi ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar.begin(),ar.end());
        auto ok=[&](ll mid)
        {
            int cnt=1,l=0;
            for(int r=0;r<n;r++)
            {
                if(ar[r]-ar[l]>2*mid)
                {
                    cnt++;
                    l=r;
                }
            }
            return cnt<=3;
        };
        int l=0,r=1e9,ans=0,mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(ok(mid))
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