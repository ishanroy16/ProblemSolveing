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
    string a,b; cin>>a>>b;
    bool f=false;
    for(int i=0;i<a.size();i++)
    {
        if((a[i]=='0' && b[i]=='0') && (a[i+1]=='1' && b[i+1]=='1'))
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