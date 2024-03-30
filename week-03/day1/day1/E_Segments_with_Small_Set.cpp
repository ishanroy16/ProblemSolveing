#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    map<int,int>mp;
    int l=0;
    long long ans=0;
    for(int r=0;r<n;r++)
    {
        mp[ar[r]]++;
        while(mp.size()>k)
        {
            mp[ar[l]]--;
            if(mp[ar[l]]==0) {
                mp.erase(ar[l]);
            }
            l++;
        }
        // r++;
        ans+=(r-l+1);
    }
    cout<<ans<<endl;
    return 0;
}