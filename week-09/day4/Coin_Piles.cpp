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
    int a,b; cin>>a>>b;
    if((a+b)%3!=0)
    {
        cout<<"NO"<<nl;
    }
    else if((a*2<b || b*2 <a))
    {
        cout<<"NO"<<nl;
    }
    else cout<<"YES"<<nl;
   } 
    return 0;
}