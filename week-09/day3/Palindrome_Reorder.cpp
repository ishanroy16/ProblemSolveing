#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
    string s;
    cin>>s;
    map<char,int>cnt;
    for(int i=0;i<s.size();i++)
    {
        cnt[s[i]]++;
    }
    bool f=true;
    if(s.size()%2==0)
    {
     for(auto it:cnt)
     {
        if(it.second%2==1)
        {
            f=false;
        }
     }
    }
    else{
        int c=0;
        for(auto it:cnt)
       {
        if(it.second%2==1)
        {
           c++; 
        }
       }
       if(c!=1) f=false;
    }
    if(f==false) cout<<"NO SOLUTION"<<"\n";
    else{
        string first_half,middle;
        for(auto it:cnt)
        {
            if(it.second%2==0)
            {
            for(int i=0;i<it.second/2;i++)
            first_half+=it.first;
            }
            else{
            for(int i=0;i<it.second;i++)
            middle+=it.first;
            }
        }
        // cout<<first_half<<nl;
        // cout<<middle;
        string second_half;
        second_half=first_half;
        reverse(second_half.begin(),second_half.end());
        string palindome;
        palindome+=first_half;
        palindome+=middle;
        palindome+=second_half;
        cout<<palindome;
    }
    return 0;
}