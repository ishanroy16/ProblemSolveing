#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>

int n=1000000;
vector<int>v;
void prime()
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i])
        {
            v.pb(i);
        }
    }
}
int main()
{
   ft;
   int t; cin>>t;
   prime();
   while(t--)
   {
    int d; cin>>d;
    int ans=1, j=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-1 >=d)
        {
            ans*=v[i];
            j=v[i];
            break;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-j >=d)
        {
            ans*=v[i];
            j=v[i];
            break;
        }
    }
    cout<<ans<<"\n";
   } 
    return 0;
}