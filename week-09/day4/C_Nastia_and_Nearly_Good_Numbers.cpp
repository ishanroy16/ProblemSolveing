#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<ll>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    ll a,b; cin>>a>>b;
    if(b==1){
        cout<<"NO"<<nl;
    }
    else{
        cout<<"YES"<<nl;
        cout<<1ll*a<<" "<<1ll*a*b<<" "<<1ll*(a*(b+1))<<nl;
    }
   } 
    return 0;
}