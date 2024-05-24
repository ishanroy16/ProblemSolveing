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
  int tc; cin>>tc; 
  while(tc--)
  {
    int a,b; cin>>a>>b;
    while(__gcd(a,b)!=1)
    {
        ll x=__gcd(a,b);
        b/=x;
        if(b==1) break;
    }
    if(b==1) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
  }
    return 0;
}