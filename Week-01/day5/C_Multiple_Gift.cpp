#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    ll x,y,ans=0;
    cin>>x>>y;
    while(x<=y)
    {
        x=x*2;
        ans++;
    }
    cout<<ans<<"\n";
    return 0;
}