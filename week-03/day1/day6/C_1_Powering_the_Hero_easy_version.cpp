#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        long long  ans=0;
        priority_queue<int>pq;
        for(int i=0;i<n;i++)
        {
          if(ar[i]==0)
          {
            if(pq.size()>0)
            {
                ans+=pq.top();
                pq.pop();
            }
          }
          else{
            pq.push(ar[i]);
          }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}