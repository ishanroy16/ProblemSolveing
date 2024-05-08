#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int n,l,r,x;
    cin>>n>>l>>r>>x;
    vi c(n);
    for(int i=0;i<n;i++) cin>>c[i];
    int res=0;
    for(int i=0;i<(1<<n);i++)
    {
        int ans=0;
        int cmin=1e7;
        int cmax=0,nb=0;
        for(int j=0;j<n;j++)
        {
            int bitmask=1<<j;
            int cal=i&bitmask;
            if(cal!=0)
            {
                ans+=c[n-j-1];
                cmin=min(cmin,c[n-j-1]);
                cmax=max(cmax,c[n-j-1]);
                nb++;
            }
        }
        if(nb>1 && (cmax-cmin>=x) && ans>=l && ans<=r)
        {
            res++;
        }
    }
    cout<<res<<"\n";
    return 0;
}