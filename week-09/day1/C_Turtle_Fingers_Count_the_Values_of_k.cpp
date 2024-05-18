#include <bits/stdc++.h>
#define ll long long

#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const ll mod=1e9+7;
vector < ll > divisors(ll n) {
    vector < ll > v;
   for(int i=1;i*i<=n;i++)
   {
    if(n%i==0)
    {
        v.push_back(i);
        if(n/i!=i)
        {
            v.push_back(n/i);
        }
    }
   }
    return v;
}
int main()
{   
   
    ll t;
    cin>>t;

    while(t--) {
        ll a, b, l, comp, cnt = 0;
        cin>>a>>b>>l;
        vector < ll > k = divisors(l);
        vector < ll > x,y;
        for(ll i = 0 ; i <= 20 ; i++) {
            comp = pow(a,i);
            if(comp <= 1e6) {
                x.push_back(comp);
            }
            else 
                break;
        }
        for(ll i = 0 ; i <= 20 ; i++) {
            comp = pow(b,i);
            if(comp <= 1e6) {
                y.push_back(comp);
            }
            else 
                break;
        }
        for(ll i = 0 ; i < (ll)k.size() ; i++) {
            ll flag=0;
            for(ll j = 0 ; j < (ll)x.size(); j++) {
                for(ll m = 0 ; m < (ll)y.size() ; m++) {
                    if(k[i]*x[j]*y[m] == l) {
                        cnt++;
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;     
 }