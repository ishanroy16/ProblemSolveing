#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void TestCase(){
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=0;
    for(int i=0;i<n-1;i++){
        mx=max(mx,a[i]);
    }
    cout<<mx+a[n-1]<<nl;
}
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    TestCase();
   } 
    return 0;
}