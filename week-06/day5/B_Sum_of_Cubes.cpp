#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool is_representable(ll x)
{
    for(ll a=1;a*a*a<x;a++)
    {
        ll b_cube=x-a*a*a;
        ll b=round(cbrt(b_cube));
        if(b*b*b==b_cube)
        {
            return true;
        }
        
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     int t; cin>>t;
     while(t--)
     {
        ll x; cin>>x;
        if(is_representable(x))
        {
            cout<<"YES"<<"\n";
        }
        else cout<<"NO"<<"\n";
     }
    return 0;
}