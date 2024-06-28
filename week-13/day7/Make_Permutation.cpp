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
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    if(a[n-1]!=1 && mp[n]>1){
        cout<<"NO"<<nl;
    }
    else{
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]<=n-i)
            {

            }
            else{
                ok=false;
                break;
            }
        }
        if(ok) cout<<"YES"<<nl;
        else{
            cout<<"NO"<<nl;
        }
    }
}
int32_t main()
{
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}