#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    int n,k; cin>>n>>k;
    for(int i=1;i<=(log2(n)+1);i++)
    {
        int x=pow(2,i);
       int y=(n+(x/2))/x;
        if(k<=y)
        {
            if(k==1)
            {
                cout<<x/2<<nl;
                break;
            }
            else{
                int ans=(x/2)+((k-1)*x);
                cout<<ans<<nl;
                break;
            }
        }
        else k-=y;
    }
   } 
    return 0;
}