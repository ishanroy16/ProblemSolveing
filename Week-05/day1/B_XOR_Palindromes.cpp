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
        string s;
        cin>>s;
        int i;
        int goodpair=0,buggish=0;
        string ans="";
        int l=0,r=n-1;
        while(l<r)
        {
            if(s[l]==s[r])
            {
                goodpair+=2;
            }
            else{
                buggish++;
            }
            l++,r--;
        }
        for(i=0;i<=n;i++)
        {
            int total=i;
            total-=buggish;
            if(total<0)
            {
                ans.push_back('0');
                continue;
            }
            total=max((total%2),total-goodpair);
            total=max(0,total-(n%2));
            if(total==0)
            {
                ans.push_back('1');

                
            }
            else{
                ans.push_back('0');
            }
        }
        cout<<ans<<"\n";
     }
    return 0;
}