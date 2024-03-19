#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     int n;
     cin>>n;
     int ar[n];
     long long sum=0;
     int mn_odd=INT_MAX;
     for(int i=0;i<n;i++)
     {
        cin>>ar[i];
     }
     for(int i=0;i<n;i++)
     {
       sum+=ar[i];
       if(ar[i]%2==1)
       {
        if(ar[i]<mn_odd)
        {
            mn_odd=ar[i];
        }
       }
     }
     if(sum%2==0)
     {
        cout<<sum<<"\n";
     }
     else{
        sum=sum-mn_odd;
        cout<<sum<<"\n";
     }
    return 0;
}