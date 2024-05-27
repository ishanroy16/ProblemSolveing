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
    ll a,b,k; cin>>a>>b>>k;
    ll cnt=0;
    while(b>a)
    {
        if(b%k==0 && b/k>=a)
        {
            cnt++;
            b/=k;
        }
        else {
            if(b/k<a)
            {
                cnt+=b-a;
                b-=b-a;
            }
            else{
                cnt+=b%k;
                b-=b%k;
            }
            if(b<=a)
            {
                break;
            }
        }
    }
    cout<<cnt<<nl;
   } 
    return 0;
}