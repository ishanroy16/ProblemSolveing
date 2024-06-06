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
    int n; cin>>n;
    vi a(n);
    int mn=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
    } 
    vi b;
    for(int i=0;i<n;i++)
    {
        if(a[i]%mn !=0)
        {
            b.pb(a[i]);
        }
    }
    // cout<<b.size();
    if(b.size()==0)
    {
        cout<<"Yes"<<nl;
        continue;
    }
    int mn2=INT_MAX;
    for(int val:b)
    {
        mn2=min(mn2,val);
    }
    vi c;
    for(int i=0;i<b.size();i++)
    {
        if(b[i]%mn2!=0)
        {
            c.pb(b[i]);
        }
    }
    if(c.size()==0)
    {
      cout<<"Yes"<<nl;  
    }  
    else cout<<"No"<<nl;
    
     } 

    return 0;
}