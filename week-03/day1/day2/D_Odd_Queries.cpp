#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t;
   cin>>t;
   while(t--)
   {
     long long n,q;
    cin>>n>>q;
    long long ar[n];
    for(long long i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
    long long pre[n+1];
    pre[1]=ar[1];
    pre[0]=0;
    for(long long i=2;i<=n;i++)
    {
        pre[i]=ar[i]+pre[i-1];
    }
    long long suf[n+1];
    suf[n]=ar[n];
    suf[n+1]=0;
    for(long long i=n-1;i>0;i--)
    {
        suf[i]=ar[i]+suf[i+1];
    }
    // for(long long i=1;i<=n;i++)
    // {
    //     cout<<suf[i]<<" ";
    // }
    long long l,r,k;
    while(q--)
    {
        cin>>l>>r>>k;
        long long sum=pre[l-1]+suf[r+1];
        sum+=(r-l+1)*k;
        if(sum%2==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
   }
    return 0;
}