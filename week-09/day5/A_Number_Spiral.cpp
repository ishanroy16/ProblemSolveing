#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int y,x; cin>>y>>x;
    ll mx=max(x,y);
    ll square=(mx-1)*(mx-1);
    if(mx%2==0)
    {
        if(x>y)
        {
            cout<<square+y<<nl;
        }
        else cout<<mx*mx-x+1<<nl;
    }
    else{
        if(x>y) cout<<mx*mx-y+1<<nl;
        else cout<<square+x<<nl;
    }
   } 
    return 0;
}