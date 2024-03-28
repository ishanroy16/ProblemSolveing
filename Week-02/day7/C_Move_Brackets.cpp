#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long ans=0;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(') ans++;
            if(s[i]==')' && ans) ans--; 
        }
        cout<<ans<<endl;
    }
    return 0;
}