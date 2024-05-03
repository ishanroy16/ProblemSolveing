#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define y cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
int main()
{
    ft;
    string t,p;
    cin>>t>>p;
    int n=t.size();
    int m=p.size();
    vi v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    auto ok =[&](ll mid)
    {
        vector<bool>bad(n+1);
        for(int i=0;i<mid;i++)
        {
            bad[v[i]]=true;
        }
        int j=0;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if(t[i]==p[j] && !bad[i+1])
            {
                j++;
            }
            if(j==m) 
            {
                found=true;
                break;
            }
        }
        return found;
        
    };
    int l=0,r=n,mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<ans<<"\n";
    return 0;
}