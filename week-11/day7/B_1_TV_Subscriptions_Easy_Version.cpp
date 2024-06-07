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
    int n,k,d;
    cin>>n>>k>>d;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    map<int,int>mp;
    vi b;
    int l=0,r=0,cnt=0;
    while(r<n)
    {
        mp[a[r]]++;
        if(r-l+1==d)
        {
            b.pb(mp.size());
            // cout<<mp.size()<<" ";
            mp[a[l]]--;
            if(mp[a[l]]==0)
            {
                mp.erase(a[l]);
            }
            l++;
        }
        r++;
    }
    sort(b.begin(),b.end());
    cout<<b[0]<<nl;
   }

    return 0;
}