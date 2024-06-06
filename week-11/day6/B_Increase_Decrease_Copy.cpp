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
    vi b(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n+1;i++) cin>>b[i];
    int cnt=1;
    bool f=false;
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cnt+=abs(a[i]-b[i]);
        if((b[n]>=b[i] && b[n]<=a[i] ) || (b[n]<=b[i] && b[n]>=a[i]))
        {
            f=true;
        }
        mn=min(mn,abs(a[i]-b[n]));
        mn=min(mn,abs(b[i]-b[n]));
    }

    if(f)
    {

    cout<<cnt<<nl;
    }
    else {
        
        cout<<mn+cnt<<nl;
    }
   } 
    return 0;
}