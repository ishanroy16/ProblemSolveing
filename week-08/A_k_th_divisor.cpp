#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
int main()
{
    ft;
    ll n,k;
    cin>>n>>k;
    vi v;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0) 
        {
            v.push_back(i);
            if(n/i !=i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)
    {
        cout<<"-1\n";
    }
    else cout<<v[k-1]<<"\n";
    return 0;
}