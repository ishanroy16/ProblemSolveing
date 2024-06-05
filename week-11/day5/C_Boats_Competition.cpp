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
    sort(a.begin(),a.end());
    int first=a[0];
    int second=a[n-1];
// cout<<first<<" "<<second<<nl;
    int mx=0;
    for(int i=first*2;i<=second*2;i++)
    {
        int l=0,r=n-1;
        int cnt=0;
        while(l<r)
        {
            if(a[l]+a[r]>i)
            {
                r--;
            }
            else if(a[l]+a[r]<i)
            {
                l++;
            }
            else{
                cnt++;
                l++,r--;
            }
        }
        mx=max(cnt,mx);
    }
    cout<<mx<<nl;
   } 
    return 0;
}