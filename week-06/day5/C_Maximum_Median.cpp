#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
vector<ll> ar;

bool can(ll v){
     ll need=0;
     for(int i=n/2;i<n;i++){
        if(v>ar[i])
           need+=abs(ar[i]-v);

        if(need>k) return false;
     }
     return need<=k;

}
int main() {
ios::sync_with_stdio(false);
     cin.tie(NULL);

    cin>>n>>k;
    ar.assign(n,0);
    for(int i=0;i<n;i++)
        cin>>ar[i];


    sort(ar.begin(),ar.end());

    ll l=1,r=1e18,ans=0,mid=0;

    while(l<=r){
        mid=(l+r)/2;
        if(can(mid)){
            l=mid+1;
            ans=mid;
        }else
          r=mid-1;
    }

    cout<<ans<<endl;

}
