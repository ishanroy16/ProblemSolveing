#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
ll lcm(ll a,ll b)
{
    return ((a/(__gcd(a,b)))*b);
}
int main()
{
    ft;
    ll n,a,b,p,q,ans=0,overlep;
    cin>>n>>a>>b>>p>>q;
    ans+=(n/a)*p;
    ans+=(n/b)*q;
    overlep=n/(lcm(a,b));
    ans-=overlep*min(p,q);
    cout<<ans<<"\n";
    return 0;
}