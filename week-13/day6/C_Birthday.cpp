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
   int n; cin>>n;
   int ar[n];
   for(int i=1;i<=n;i++) cin>>ar[i];
   sort(ar+1,ar+n+1);
   for(int i=1;i<=n;i+=2)
   {
    cout<<ar[i]<<" ";
   }
   for(int i=n/2+n/2;i>0;i-=2)
   {
    cout<<ar[i]<<" ";
   }
    return 0;
}