#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll m=(n*n-n)/2;
        vector<ll>b(m);
        for(ll i=0;i<m;i++) cin>>b[i];
        

        sort(b.begin(),b.end());
        for(ll i=0;i<m;i+=--n)
        {
            cout<<b[i]<<" ";
        }
        cout<<b[m-1]<<"\n";
    }
    return 0;
}