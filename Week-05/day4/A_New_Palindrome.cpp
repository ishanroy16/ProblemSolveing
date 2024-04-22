#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int num=0;
       if(n%2==0 && n>2)
       {
           for(int i=1;i<n/2;i++)
           {
            if(s[i]!=s[i-1])
            {
                num++;
                break;
            }
           }
       }
       else if( n%2==1 && n>3)
       {
        for(int i=1;i<n/2;i++)
           {
            if(s[i]!=s[i-1])
            {
                num++;
                break;
            }
           }
       }
       if(num) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}