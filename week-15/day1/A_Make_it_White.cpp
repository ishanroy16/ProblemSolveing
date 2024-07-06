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
    int n; cin>>n;
    string s; cin>>s;
    int first=0,last=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            first=i+1;
            break;
        }
    }
    
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            last=i+1;
            break;
        }
    }
   cout<<last-first+1<<nl;

}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--){
    solve();
   } 
    return 0;
}