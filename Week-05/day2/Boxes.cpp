#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        ll XOR=a[0];
        ll ans=1;
        ll i=0,j=n-1;
        while(i<j)
        {
            if((XOR)>=a[j])
            {
                XOR^=a[j];
                j--;
            }
            else{
                ans++;
                XOR=a[i];
                i++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}