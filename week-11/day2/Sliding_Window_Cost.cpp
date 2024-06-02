#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // for set
// template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // for multiset
#define int long long
#define float double
#define endl '\n'
 
 
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    int l=0,r=0;
    int mid = k/2;
    pbds<pair<int,int> > p;
     int cost = 0;
     bool f=true;
     int old_mid;
    while(r<n) {
        p.insert({v[r],r});
        if(r-l+1==k) {
            auto it = p.find_by_order(mid);
            int middle = it->first;
            
            if(f)
            {
                f=false;
                for(auto i:p) {
                cost += abs(i.first-middle);
            }
            }
            else{
                cost+=abs(v[r]-middle);
               if(k%2==0)  cost+=(middle-old_mid);
            }
            
            cout<<cost<<" ";
            cost-=abs(v[l]-middle);
            old_mid=middle;
            p.erase({v[l],l});
            l++;
        }
        r++;
    }
    return 0;
}