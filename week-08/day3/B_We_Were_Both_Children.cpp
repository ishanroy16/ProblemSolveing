#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vi ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        map<ll,ll>freq;
        // vi freq(n+2,0);
        for(int i=0;i<n;i++)
        {
            if(ar[i]>n) continue;
            freq[ar[i]]++;
        }
        ll result=0;
        for(int i=1;i<=n;i++)
        {
            ll cnt=0;
            for(int x=1;x*x<=i;x++)
            {
                if(i%x==0)
                {
                    cnt+=freq[x];
                    if(x*x!=i)
                    {
                        cnt+=freq[i/x];
                    }
                }
            }
            result=max(result,cnt);
        }
        cout<<result<<"\n";
    }
    return 0;
}