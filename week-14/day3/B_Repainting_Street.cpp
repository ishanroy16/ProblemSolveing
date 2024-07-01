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
    for(int i=0;i<n;i++) cin>>a[i];
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    int mn=INT_MAX;
    for(int x:st)
    {
        int cnt=0;
        int i=0;
        while(i<n){
            if(a[i]!=x){
                cnt++;
                i+=k;
            }
            else{
                i++;
            }
        }
        mn=min(cnt,mn);
    }
    cout<<mn<<nl;
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