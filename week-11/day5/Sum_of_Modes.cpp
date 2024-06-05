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
    int n; cin>>n;
    string s; cin>>s;
    map<int,int>same;
    same[0]=1;
    int z=0,o=0;
    int ans=n*(n+1)/2;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            o++;
        }
        else z++;
        if(same.find(z-o)!=same.end())
        {
            ans+=same[z-o];
            same[z-o]++;
            continue;
        }
        same[z-o]=1;
    }
    cout<<ans<<nl;
   } 
    return 0;
}