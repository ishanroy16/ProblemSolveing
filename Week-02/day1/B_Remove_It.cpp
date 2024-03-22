#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int n,x;
     cin>>n>>x;
     vector<int>v(n);
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
     }
     vector<int>v2;
     for(int i=0;i<n;i++)
     {
        if(v[i]!=x)
        {
            v2.push_back(v[i]);
        }
     }
     for(int c:v2)
     {
        cout<<c<<" ";
     }
    return 0;
}