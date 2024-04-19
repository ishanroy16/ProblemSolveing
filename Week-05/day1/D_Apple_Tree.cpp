#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
#define ll long long
vector<int>adj[N];
vector<ll>leafs;
void dfs(int curr,int par)
{
    bool Child=false;
    for(auto i:adj[curr])
    {
        if(i==par) continue;
        Child=true;
        dfs(i,curr);
        leafs[curr]+=leafs[i];
    }
    if(!Child)
    {
        leafs[curr]=1;
    }
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<=n;i++)
        {
            adj[i].clear();
        }
        // for(int i=0;i<=n+2;i++)
        // {
        //     leafs.push_back(0);
        // }
        leafs.assign(n+2,0);
        for(int i=1;i<n;i++)
        {
            int u,v; cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,-1);
        int q; cin>>q;
        while(q--)
        {
            ll x,y; cin>>x>>y;
            ll ans=leafs[x]*leafs[y];
            cout<<ans<<"\n";
        }
    }
    return 0;
}