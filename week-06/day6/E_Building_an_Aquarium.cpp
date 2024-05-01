#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while(t--) {
        ll n, k,l=1,r=0;
        cin >> n >> k;
        vector<ll> coral_ht(n);
        for(ll i = 0; i < n; i++) {
            cin >> coral_ht[i]; 
        }
         r = 1e10;
        while(l < r-1) {
            ll total_water = 0; 
            ll mid_ht = (l+r)/2;
            for(ll i=0;i<n;i++)
            {
                if(coral_ht[i]<mid_ht)
                {
                    total_water+=(mid_ht-coral_ht[i]);
                }
            }
            if(total_water>k)
            {
                r=mid_ht;
            }
            else{
                l=mid_ht;
            }
        }
        cout<<l<<"\n";
    }
    return 0;
}