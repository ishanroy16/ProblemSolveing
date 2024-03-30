#include<bits/stdc++.h>
using namespace std;
int main()
{
    
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     long long n;
     long long s;
     cin>>n>>s;
     vector<long long>a(n);
     for(long long i=0;i<n;i++)
     {
        cin>>a[i];
     }
     long long sum=0;
     long long l=0,r=0,ans=0;
     while(r<n)
     {
        sum+=a[r];
            while(sum>=s)
            {
                ans+=n-r;
                sum-=a[l];
                l++;
            }
        r++;
     }
     if(ans==INT_MAX)
     {
        cout<<-1<<"\n";
     }
     else{
        cout<<ans<<"\n";
     }
    return 0;
}