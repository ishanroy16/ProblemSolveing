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
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
    {
        if(s[i]<97)
        {
            s[i]=s[i]+32;
        }
    }
    s.erase(unique(s.begin(),s.end()),s.end());
    // cout<<s<<endl;
    string s2="meow";
    if(s==s2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}