#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n;
    cin>>n;
    int ar[n+3];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    ll ans=ar[1]-1;
    ll ind=ans;
    for(int i=2;i<=n;i++)
    {
        if((ind+i)<ar[i])
        {
            ll x=ar[i]-(ind+i);
            ind+=x;
            ans+=x;
        }
    }
    cout<<ans<<"\n";
   }
    return 0;
}