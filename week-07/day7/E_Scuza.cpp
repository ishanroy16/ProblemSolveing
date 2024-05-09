#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int t;                  cin>>t;
    while(t--){
        int n,q;            cin>>n>>q;
        vector<ll> a(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        
        vector<ll> pref(n+2,0);
        for(int i=1;i<=n;i++){
            pref[i]=(a[i]+pref[i-1]);
        }
        
        vector<ll> ans(q);
        vector<pair<ll,int>> k(q);
        for(int i=0;i<q;i++){
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        int AP=0;
        for(int i=0;i<q;i++){
            while(true){
                if(AP==n or a[AP+1]>k[i].first)break;
                AP++;
                // cout<<AP<<" ";
            }
            ans[k[i].second]=pref[AP];
        }

        for(int i=0;i<q;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}