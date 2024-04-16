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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int odd=0,ans=0;
        for(int i=0;i<k;i++)
        {
            if(a[i]%2==1)
            {
                odd++;
            }
        }
        if(odd>0) ans++;
        for(int i=k;i<n;i++)
        {
            if(a[i-k]%2==1) odd--;
            if(a[i]%2==1) odd++;
            if(odd>0) ans++;
        }
        cout<<ans<<"\n";
        
     }
    return 0;
}