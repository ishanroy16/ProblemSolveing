#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void TestCase()
{
    string a,b; cin>>a>>b;
    int ans=a.size()+b.size();
    for(int i=0;i<b.size();i++)
    {
        int p2=i;
        for(int p1=0;p1<a.size() && p2<b.size();p1++){
            if(a[p1]==b[p2]){
                p2++;
            }
        }
        int need=i+a.size()+(b.size()-p2);
        ans=min(ans,need);
    }
    cout<<ans<<nl;
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