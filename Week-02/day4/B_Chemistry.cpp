#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int freq[26]={0};
    int require=0;
    for(int i=0;i<s.length();i++)
    {
        freq[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]!=0)
        {
       
        if(freq[i]%2==1)
        {
            require++;
        }

        }
    }
    if(require>k+1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
   
    return 0;
}