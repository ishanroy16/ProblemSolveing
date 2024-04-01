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
     long long n;
    cin>>n;
   string s[n];
   map<string,long long>mp;
   
    for(int i=0;i<n;i++)
    {  
        cin>>s[i];
        mp[s[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        string h=s[i];
       for(int j=1;j<h.size();j++)
       {
        string x=s[i].substr(0,j);
        string y=s[i].substr(j,h.size()-j);
        // cout<<x<<" "<<y<<endl;
        if(mp[x]>0 && mp[y]>0)
        {
            flag=true;
            // cout<<x<<" "<<y<<endl;
            break;
        }
       }
       if(flag) cout<<"1";
       else cout<<"0";
    }
    cout<<"\n";
   }

    return 0;
}