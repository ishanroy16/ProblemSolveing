#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar.begin(),ar.end());
    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        int index=upper_bound(ar.begin(),ar.end(),x)-ar.begin();
        cout<<index<<"\n";
    }
    return 0;
}