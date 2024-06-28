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
    vector<int>a[n];
    vector<int>all;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        a[i].resize(x);
        for(int j=0;j<x;j++)
        {
            cin>>a[i][j];
            all.push_back(a[i][j]);
        }
    }
    sort(all.begin(),all.end());
    all.erase(unique(all.begin(),all.end()),all.end());
    int ans=0;
    for(int val=1;val<=50;val++)
    {
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
            bool found=false;
            for(int j=0;j<a[i].size();j++){
                if(a[i][j]==val){
                    found=true;
                    break;
                }
            }
            if(!found){
                for(int j=0;j<a[i].size();j++)
                {
                    temp.pb(a[i][j]);
                }
            }
        }
        sort(temp.begin(),temp.end());
        temp.erase(unique(temp.begin(),temp.end()),temp.end());
        if(temp!=all)
        {
            ans=max(ans,(int)temp.size());
        }
    }
    cout<<ans<<nl;
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