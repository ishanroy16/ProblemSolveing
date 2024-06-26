#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n,k; cin>>n>>k;
    vi a(n);
    
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }
    vector<int>diff(n);
    int sum1=0;
    for(int i=0;i<n;i++)
    {
        diff=a;
        diff[i]=1;
        int sum=0;
        for(int j=0;j<n-1;j++)
        {
            sum+=abs(diff[j]-diff[j+1]);
        }
        sum1=max(sum1,sum);
    }
    int sum2=0;
    for(int i=0;i<n;i++)
    {
        diff=a;
        diff[i]=k;
        int sum=0;
        for(int j=0;j<n-1;j++)
        {
            sum+=abs(diff[j]-diff[j+1]);
        }
        sum2=max(sum2,sum);
    }
    cout<<max(sum1,sum2)<<nl;
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