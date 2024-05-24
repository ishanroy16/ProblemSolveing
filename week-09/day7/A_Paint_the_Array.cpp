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
    ll n; cin>>n;
    ll ar[n+1];
    for(int i=1;i<=n;i++) cin>>ar[i];
   ll gcd1=0,gcd2=0;
    bool f1=true;
    bool f2=true;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            gcd1=__gcd(gcd1,ar[i]);
        }
        else gcd2=__gcd(gcd2,ar[i]);
    }
    for(int i=1;i<=n;i+=2)
    {
        if(ar[i]%gcd2==0)
        {
            f2=false;
            break;
        }
    }
    for(int i=2;i<=n;i+=2)
    {
        if(ar[i]%gcd1==0)
        {
            f1=false;
            break;
        }
    }
    if(f1==false && f2==false)
    {
        cout<<0<<nl;
    }
    else if(f1==true)
    {
        cout<<gcd1<<nl;
    }
    else cout<<gcd2<<nl;
   } 
    return 0;
}