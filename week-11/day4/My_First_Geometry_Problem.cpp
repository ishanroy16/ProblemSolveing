#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    string s; cin>>s;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') sum++;
    }
    if(sum==0)
    {
        cout<<1<<nl;
    }
    else if(sum==1)
    {
        cout<<11<<nl;
    }
    else if(sum==3)
    {
        cout<<231<<nl;
    }
    else if(sum==4){
        cout<<441<<nl;
    }
    else{
        if(s[0]=='1' && s[1]=='1') {
            cout<<21<<nl;
        }
        else if(s[2]=='1' && s[3]=='1')
        {
            cout<<21<<nl;
        }
        else{
            cout<<121<<nl;
        }
    }
   } 
    return 0;
}