#include <bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        pbds<int>p;
        long long result=0;
        for(int i=n-1;i>=0;i--)
        {
            // int x; cin>>x;
            long long y=p.order_of_key(a[i]+1);
            p.insert(a[i]);
            result+=y;
        }
        cout<<result<<"\n";
    }
    return 0;
}