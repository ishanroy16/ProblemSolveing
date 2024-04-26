#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int n; cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    bool flag=false;
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(int bit=0;bit<n;bit++)
        {
            if(i &(1<<bit)) sum+=ar[bit];
            else sum-=ar[bit];
        }
        if(sum%360==0) flag=true;
        
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}