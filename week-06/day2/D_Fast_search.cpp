#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int n; cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    int k; cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        auto left=lower_bound(ar.begin(),ar.end(),l)-ar.begin();
        auto right=upper_bound(ar.begin(),ar.end(),r)-ar.begin();

        cout<<right-left<<" ";
        
    
    }
    return 0;
}