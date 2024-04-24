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
        vector<int>ar(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        bool flag=false;
        for(int i=2;i<=n-1;i++)
        {
            if(ar[i]>ar[i-1] && ar[i]>ar[i+1])
            {
                flag=true;
                cout<<"YES"<<"\n";
                cout<<i-1<<" "<<i<<" "<<i+1<<"\n";
                break;
            }
            
        }
        if(!flag) cout<<"NO"<<"\n";
    }
    return 0;
}