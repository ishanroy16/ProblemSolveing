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
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   } 
   ll sum=0,cnt=0;
   map<int,int>mp;
   mp[0]++;
   for(int i=0;i<n;i++)
   {
    sum+=a[i]%n;
    sum=(sum+n)%n;
    cnt+=mp[sum];
    mp[sum]++;
   }
   cout<<cnt<<nl;
    return 0;
}