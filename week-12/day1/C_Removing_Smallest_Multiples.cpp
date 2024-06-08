#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve()
{
    int n; cin>>n;
    string s; cin>>s;
    s="@"+s;
    vi visited(n+1,0);
    for(int i=0;i<=n;i++)
    {
        if(s[i]=='1'){
            visited[i]=2;
        }
    }
    for(int val:visited){
        // cout<<val<<" ";
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j+=i)
        {
            if(visited[j]==0)
            {
                visited[j]=1;
                ans+=i;
            }
            else if(visited[j]==2)
            {
                break;
            }
        }
    }
    cout<<ans<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}