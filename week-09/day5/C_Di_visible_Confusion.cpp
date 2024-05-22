#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    ll n; cin>>n;
    int ar[n];
    for(int i=1;i<=n;i++) cin>>ar[i];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
    int idx=0;
        for(int j=2;j<=i+1;j++)
        {
            if(ar[i]%j!=0)
            {
                idx=1;
                break;
            }
        }
        if(idx==0)
        {
            ans=1;
            break;
        }
   
    }
    if(ans==1) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;

   } 
    return 0;
}