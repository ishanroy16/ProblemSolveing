#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        long long sum=b;
        for(int i=0;i<n;i++)
        {
            if(ar[i]+1<=a)
            {
                sum+=ar[i];
            }
            else{
                sum+=a-1;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}