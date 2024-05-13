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
        int n,k; cin>>n>>k;
        vi po,ne;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0) po.push_back(x);
            else ne.push_back(-x);
        }
       
        sort(po.rbegin(),po.rend());
        sort(ne.rbegin(),ne.rend());
        ll ans=0;
        if(ne.size()==0)
        {
            if(po.size()!=0)
            {
                for(int i=0;i<po.size();i+=k)
                {
                    ans+=po[i]*2;
                }
                 ans-=po[0];
            }
            cout<<ans<<"\n";
        }
        else if(po.size()==0)
        {
            if(ne.size()!=0)
            {
                for(int i=0;i<ne.size();i+=k)
                {
                    ans+=ne[i]*2;
                }
                 ans-=ne[0];
            }
            cout<<ans<<"\n";
        }
        else {
             for(int i=0;i<po.size();i+=k)ans+=po[i]*2;
            for(int i=0;i<ne.size();i+=k)ans+=ne[i]*2;
            if(po[0]>=ne[0])ans-=po[0];
            else ans-=ne[0];
            cout<<ans<<"\n";
        }
        
    }
    return 0;
}