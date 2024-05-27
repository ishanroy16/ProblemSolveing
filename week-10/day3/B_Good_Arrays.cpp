#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<int>
int main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n; cin>>n;
    vi a(n);
    ll sum=0;
    ll cnt_1=0;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i]==1) cnt_1++;
    }
    if(sum>=cnt_1+n && n>1)
    cout<<"YES"<<nl;
    else cout<<"NO"<<nl;

   } 
    return 0;
}