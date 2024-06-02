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
    int mx=INT_MIN,mx_idx=0,mn_idx=0;
    int a[n];
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
        
    }
    bool f=false;
    for(int i=1;i<n;i++)
    {
        if(abs(a[i+1]-a[i])>=2)
        {
            f=true;
            mx_idx=i+1;
            mn_idx=i;
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<nl;
        cout<<mn_idx<<" "<<mx_idx<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
  } 
    return 0;
}