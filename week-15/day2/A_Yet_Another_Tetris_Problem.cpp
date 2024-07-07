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
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool f=true;
    for(int i=1;i<n;i++){
        int diff=abs(a[i]-a[i-1]);
        if(diff%2==1){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"YES"<<nl;
    }
    else cout<<"NO"<<nl;
   } 
    return 0;
}