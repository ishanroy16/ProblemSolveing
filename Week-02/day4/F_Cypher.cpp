#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        vector<int>n;
        for(int i=0;i<a;i++)
        {
           cin>>b;
           n.push_back(b);
        }
        int c;
        string s;
        
        for(int i=0;i<a;i++)
        {
            cin>>c;
            cin>>s;
            for(int j=0;j<c;j++)
            {
                if(s[j]=='U')
                {
                    if(n[i]==0) n[i]=9;
                    else n[i]--;
                }
                else{
                    if(n[i]==9) n[i]=0;
                    else n[i]++;
                }
            }
            
        }
       for(int i=0;i<a;i++)
       {
        cout<<n[i]<<" ";
       }
        cout<<endl;
    }
    return 0;
}