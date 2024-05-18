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
    ll l,r; cin>>l>>r;
    ll num=(r-l+1)/2;
    cout<<"YES"<<"\n";
    for(ll i=0;i<num;i++)
    {
        cout<<l<<" "<<l+1<<"\n";
        l+=2;
    }
    return 0;
}