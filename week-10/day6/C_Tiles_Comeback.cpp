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
    int n,k; cin>>n>>k;
    vi a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    vector<int>suff(n,0);
    suff[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
        suff[i]=suff[i+1]+(a[i]==a[n-1]);
    }
    if(a[0]==a[n-1])
    {
        if(suff[0]%k==0 || suff[0]>=k)
        {
            cout<<"YES"<<nl;
            continue;
        }
    }
    bool f=false;
    int cnt=0;
    for(int i=0;i<=n-2;i++){
        cnt+=(a[0]==a[i]);
        if(cnt%k==0 && suff[i+1]>=k)
        {
            f=true;
            break;
        }
    }
    if(f) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
   } 
    return 0;
}