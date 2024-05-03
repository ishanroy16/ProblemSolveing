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
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vi v(k);
        for(int i=0;i<k;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        int x=0,m=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            ans++;
            m=n-v[i];
            // cout<<v[i]<<" ";
            x+=m;
            if(x>=v[i+1]){
                break;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}