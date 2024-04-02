#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll total=0;
        ll miniChange=0;
        vector<ll>change;
        for(ll i=0;i<n;i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    total+=R;
                    miniChange++;
                    change.push_back(R-L);
                }
                else{
                    total+=L;
                }
            }
            else{
                if(L>R)
                {
                    total+=L;
                    miniChange++;
                    change.push_back(L-R);
                }
                else{
                    total+=R;
                }
            }
        }
        vector<ll>ans(n+1);
        for(ll i=miniChange;i<=n;i++)
        {
            ans[i]=total;
        }
        sort(change.begin(),change.end(),greater<ll>());
        for(ll i=miniChange-1;i>=1;i--)
        {
            total-=change.back();
            change.pop_back();
            ans[i]=total;
        }
        for(ll i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}