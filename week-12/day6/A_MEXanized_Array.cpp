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
    int n,k,x; cin>>n>>k>>x;
    if(k>n || k>x+1)
    {
        cout<<-1<<nl;
        continue;
    }
    int ans=0;
    for(int i=0;i<k;i++)
    {
        ans+=i;
    }
    int m=n-k;
    if(k!=x)
    ans+=(m*x);
    else ans+=m*(x-1);
    cout<<ans<<nl;
   } 
    return 0;
}