#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
     int t; cin>>t;
     while(t--)
     {
        int n; cin>>n;
        vector<int>ar(n);
        int num_odd=0,num_even=0;
        int mn=INT_MAX;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]<0)
            {
                num_odd++;
            }
            sum+=abs(ar[i]);
            mn=min(mn,abs(ar[i]));
        }
        
        if(num_odd%2==1) sum-=2ll*mn;
        cout<<sum<<endl;

     }
    return 0;
}