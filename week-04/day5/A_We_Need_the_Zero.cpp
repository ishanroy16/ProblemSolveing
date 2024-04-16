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
        vector<int>ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int x=0;
        for(int i=0;i<n;i++)
        {
            x^=ar[i];
        }
        for(int i=0;i<n;i++)
        {
            ar[i]^=x;
        }
        int y=0;
        for(int i=0;i<n;i++)
        {
            y^=ar[i];
        }
        if(y==0)
        {
            cout<<x<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    }
    return 0;
}