#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long ar[n];
        for(long long i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        long long ans=0;
        long long op=0;
        for(long long i=0;i<n;i++)
        {
            if(ar[i]>=0)
            {
                ans+=ar[i];
            }
            else{
                op++;
                long long l=i;
                while(l<n && ar[l]<=0)
            {
                ans+=abs(ar[l]);
                i=l;
                l++;
                
            }
            }
        }
        cout<<ans<<" "<<op<<"\n";
    }
    return 0;
}