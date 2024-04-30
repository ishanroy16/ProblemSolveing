#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     
    int t; cin>>t;
    while(t--)
    {
        string a,b; cin>>a>>b;
        int lcs=0;
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                int x=i,y=j;
                int len=0;
                while(x<a.size() && y<b.size() && a[x++]==b[y++])
                len++;
                lcs=max(lcs,len);
            }
        }
        cout<<a.size()+b.size()-2*lcs<<"\n";
    }
    return 0;
}