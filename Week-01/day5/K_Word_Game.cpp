#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str[n][n];
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        // string s;
        // cin>>s;
        for(int j=0;j<n;j++)
        {
            cin>>str[i][j];
            mp[j]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<str[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<mp[orz];
    return 0;
}