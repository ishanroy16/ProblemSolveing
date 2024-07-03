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
   vi b(n);
   for(int i=0;i<n;i++) cin>>b[i];
   vi a(n);
   a[0]=b[0];
    int x=a[0];
   for(int i=1;i<n;i++){
    a[i]=b[i]+x;
    x=max(a[i],x);
   }
   for(int val:a) cout<<val<<" ";
    return 0;
}