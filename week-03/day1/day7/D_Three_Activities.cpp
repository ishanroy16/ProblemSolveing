#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<ll,ll>>va;
        vector<pair<ll,ll>>vb;
        vector<pair<ll,ll>>vc;
      
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            va.push_back({x,i});
        }
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            vb.push_back({x,i});
        }
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            vc.push_back({x,i});
        }
        sort(va.begin(),va.end(),greater<>());
        sort(vb.begin(),vb.end(),greater<>());
        sort(vc.begin(),vc.end(),greater<>());
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(va[i].second!=vb[j].second && vb[j].second!=vc[k].second && va[i].second!=vc[k].second)
                    {
                        sum=max(va[i].first+vb[j].first+vc[k].first,sum);
                    }

                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}