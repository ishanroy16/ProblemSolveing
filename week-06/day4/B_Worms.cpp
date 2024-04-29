#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int n; cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<int>prev(n);
    prev[0]=ar[0];
    for(int i=1;i<n;i++)
    {
        prev[i]=prev[i-1]+ar[i];
    }
    // for(int val:prev) cout<<val<<" ";
    int m; cin>>m;
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        int val=lower_bound(prev.begin(),prev.end(),x)-prev.begin();
        cout<<val+1<<"\n";
    }
    return 0;
}