#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int l=0,r=0,ans=0;
    long long sum=0;

    while(r<n)
    {
        sum+=ar[r];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
        }
        else{
            sum-=ar[l];
            l++;
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}