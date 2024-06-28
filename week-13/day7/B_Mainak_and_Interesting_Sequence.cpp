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
    int n,m; cin>>n>>m;
    if(n>m || (n%2==0 && m%2==1))
    {
        cout<<"No"<<nl;
    }
    else{
        cout<<"Yes"<<nl;
        if(n%2==1)
        {
            for(int i=0;i<n-1;i++)
            {
                cout<<1<<" ";
            }
            cout<<m-n+1<<nl;
        }
        else{
            for(int i=0;i<n-2;i++)
            {
                cout<<1<<" ";
            }
            cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<nl;
        }
    }
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