#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>s;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int vis=0;
        for(int i=n-1;i>=0;i--)
        {
                 s.insert(ar[i]);
                vis++;
                if(vis>s.size())
                {
                    break;
                }
   
        }
        int m=s.size();
        cout<<n-m<<endl;
    }
    return 0;
}