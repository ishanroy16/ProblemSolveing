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
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vi b(n);
    if(a[0]==1){
        b[0]=2;
    }
    else b[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]==b[i-1]+1){
            b[i]=b[i-1]+2;
        }
        else{
            b[i]=b[i-1]+1;
        }
    }
    // for(int val:b) cout<<val<<" ";
    cout<<b[n-1]<<nl;
   } 
    return 0;
}