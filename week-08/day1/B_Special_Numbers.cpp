#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        ll n,k; cin>>n>>k;
        ll p=1;
        ll ans=0;
        for(int i=0;i<31;i++)
        {
            if(k & (1<<i))
            {
                ans+=p;
                ans%=MOD;
            }
            p*=n;
            p%=MOD;
        }
        cout<<ans<<"\n";
    }
    return 0;
}