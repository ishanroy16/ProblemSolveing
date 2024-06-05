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
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f=a[0];
    bool flag=true;
    bool ok=true;
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>=a[i-1] && flag==true)
        {

        }
        else{
            flag=false;
            if(a[i]<=f)
            {
                if(cnt==1)
                {
                    if(a[i]>=a[i-1])
                    {

                    }
                    else{
                        ok=false;
                    }
                }
                cnt=1;
            }
            else{
                ok=false;
                break;
            }
        }
    }
    if(ok) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
   } 
    return 0;
}