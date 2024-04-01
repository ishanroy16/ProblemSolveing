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
        int n;
    cin>>n;
    vector<int>v;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            
           int x;
           cin>>x;
           mp[x]++;
          if(mp[x]==1)
          {
             v.push_back(x);
          }
            
        }
    }
    for(int c:v)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
    }
    return 0;
}