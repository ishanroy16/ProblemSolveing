#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        ll n,B;
        cin>>n>>B;
        vector<ll>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int curr=-1;
        for(int i=0;i<n;i++)
        {
            if((ar[i]&B)==B)
            {
                curr&=ar[i];
            }
        }
        if(curr==B) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        
    }
    return 0;
}