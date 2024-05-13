#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
ll inv_cnt(vector<ll>&a,ll n)
{
    ll ans=0,one=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        else ans+=one;
    }
    return ans;
}
int main()
{
    ft; 
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vi a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll ans=inv_cnt(a,n);
        ll idx=-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                idx=i;
                a[i]=1;
                break;
            }
        }
        ans=max(ans,inv_cnt(a,n));
        if(idx!=-1)
        {
            a[idx]=0;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==1)
            {
                a[i]=0;
                break;
            }
        }
        ans=max(ans,inv_cnt(a,n));
        cout<<ans<<"\n";
    }
    return 0;
}