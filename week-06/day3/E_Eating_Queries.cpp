#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar.begin(),ar.end(),greater<int>());
        vector<int>prev(n);
        prev[0]=ar[0];
        for(int i=1;i<n;i++)
        {
            prev[i]=prev[i-1]+ar[i];
        }
        
        while(q--)
        {
            int x; cin>>x;
            if(x>prev[n-1])
            {
                cout<<-1<<"\n";
                continue;
            }
            int l=0,r=n-1,indx=-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(prev[mid]>=x)
                {
                    indx=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            cout<<indx+1<<"\n";
        }
       
    }
    return 0;
}