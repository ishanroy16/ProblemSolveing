#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>ar(n);
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll total=0;
        for(ll i=0;i<n;i++)
        {
            if(ar[i]>0)
            {
                total+=ar[i];
            }
            else{
                ll k=min(total,-ar[i]);
                ar[i]+=k;
                total-=k;
            }
        }
        total=0;
        for(ll i=0;i<n;i++)
        {
            if(ar[i]<0) total+=abs(ar[i]);
        }
        cout<<total<<"\n";
    }
    return 0;
}