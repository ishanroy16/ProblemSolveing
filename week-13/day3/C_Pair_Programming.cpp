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
   int t; cin>>t;
   while(t--)
   {
    int k,n,m; cin>>k>>n>>m;
    vi a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int pos1=0,pos2=0;
    vi ans;
    bool f=true;
    while(pos1!=n || pos2!=m)
    {
        if(pos1!=n && a[pos1]==0){
            ans.push_back(0);
            k++;
            pos1++;
        }
       else if(pos2!=m && b[pos2]==0){
            ans.push_back(0);
            k++;
            pos2++;
        }
        else if(pos1!=n && a[pos1]<=k)
        {
            ans.pb(a[pos1]);
            pos1++;
        }
        else if(pos2!=n && b[pos2]<=k)
        {
            ans.pb(b[pos2]);
            pos2++;
        }
        else{
            cout<<-1;
            f=false;
            break;
        }
    }
    if(f){
        for(int val:ans) cout<<val<<" ";
    }
    cout<<nl;
   } 
    return 0;
}