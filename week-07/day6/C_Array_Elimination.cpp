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
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vi ar(n);
        for(ll i=0;i<n;i++) cin>>ar[i];
        ll bit[30];
        for(ll i=0;i<30;i++)
        {
            bit[i]=0;
        }
        for(ll i=0;i<30;i++)
        {
            ll num=1ll<<i;
            for(ll j=0;j<n;j++)
            {
                if((ar[j]& num)!=0) bit[i]++;
            }
        // cout<<i<<" "<<bit[i]<<"\n";
        }
        for(ll k=1;k<=n;k++)
        {
            bool flag=1;
            for(ll j=0;j<30;j++)
            {
                if((bit[j]%k)!=0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag) cout<<k<<" ";
        }
        cout<<"\n";
    }
    return 0;
}