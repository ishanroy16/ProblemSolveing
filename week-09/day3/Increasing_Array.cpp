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
   int n; cin>>n;
   vi a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   ll mn=0;
   for(int i=1;i<n;i++)
   {
    if((a[i-1]-a[i])>0)
    {
        mn+=a[i-1]-a[i];
        a[i]+=a[i-1]-a[i];
    }
   } 
   cout<<mn<<"\n";
    return 0;
}