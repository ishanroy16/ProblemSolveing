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
   while(t--){
    int n; cin>>n;
    if(n%2==0){
        for(int i=1;i<=n/2;i++){
            cout<<i<<" "<<n-i+1<<" ";
        }
        cout<<nl;
    }
    else{
        for(int i=1;i<=n/2;i++){
            cout<<i<<" "<<n-i<<" ";
        }
        cout<<n<<nl;
    }
   } 
    return 0;
}