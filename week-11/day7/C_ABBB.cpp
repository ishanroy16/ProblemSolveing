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
    queue<char>q;
    for(int i=0;i<s.size();i++)
    {
        if(!q.empty())
        {
            if(s[i]=='B')
            {
                q.pop();
            }
            else{
                q.push(s[i]);
            }
        }
        else{
            q.push(s[i]);
        }
    }
    cout<<q.size()<<nl;
    // for(int i=0;i<q.size();i++)
    // {
    //     cout<<q.front()<<nl;
    //     q.pop();
    // }
   } 
    return 0;
}