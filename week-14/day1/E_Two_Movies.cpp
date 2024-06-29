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
    int n; cin>>n;
    vi a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            if(a[i]>b[i]){
                sum1+=a[i];
            }
            else{
                sum2+=b[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]==1 && b[i]==1)
        {
            if(sum1<sum2)
            {
                sum1++;
            }
            else sum2++;
        }
    }
    for(int i=0;i<n;i++)
    {
         if(a[i]==-1 && b[i]==-1){
            if(sum1>sum2){
                sum1--;
            }
            else sum2--;
        }
    }

    cout<<min(sum1,sum2)<<nl;
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