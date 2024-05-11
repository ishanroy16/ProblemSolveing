#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        string s;
         cin>>s;
         int cnt_0=0,cnt_1=0;
         for(char ch:s)
         {
            if(ch=='1') cnt_1++;
         }
         cnt_0=s.size()-cnt_1;
         int ans=0;
         for(char ch:s)
         {
            if(ch=='1') 
            {
                if(cnt_0>0)
                {
                    cnt_0--;
                }
                else break;
            }
            if(ch=='0')
            {
                if(cnt_1>0)
                {
                    cnt_1--;
                }
                else break;
            }
         }
         cout<<cnt_1+cnt_0<<"\n";
    }
    return 0;
}