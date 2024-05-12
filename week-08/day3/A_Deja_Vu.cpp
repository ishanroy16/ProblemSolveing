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
    ll t; cin>>t;
    while(t--)
    {
        ll n,q; cin>>n>>q;
        vi a(n),b;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<q;i++){
            int quary;
            cin>>quary;
            if(b.empty() || b.back()>quary)
            {
                b.push_back(quary);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:b)
            {
                if(a[i]%(1<<it)==0)
                {
                    it--;
                    a[i]=a[i]+(1<<it);
                }
            }
        }
        for(ll val:a)
        {
            cout<<val<<" ";
        }
        cout<<"\n";
    }
    return 0;
}