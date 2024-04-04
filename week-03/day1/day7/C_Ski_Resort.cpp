#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long int n,k,q;
        cin>>n>>k>>q;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int m=v.size();
        long long int count = 0, l = 0, ans = 0;
        while(l < m){
            while(l < m and v[l] <= q){
                l++; count++;
                if(count >= k){
                    ans += (count - k) + 1;
                }
            }
            l++; count = 0;
        }
        cout<<ans<<endl;
    }
    return 0;
}