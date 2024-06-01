#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
#define endl '\n'

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    pbds<pair<int, int>> p;
    int l = 0, r = 0;
    int mid = (k - 1) / 2;
    int cost = 0;

    // Initialize the first window
    while (r < k) {
        p.insert({v[r], r});
        r++;
    }

    // Find the initial median
    auto it = p.find_by_order(mid);
    int median = it->first;
    
    // Calculate the initial cost
    for (const auto& elem : p) {
        cost += abs(elem.first - median);
    }

    cout << cost << " ";

    // Slide the window
    while (r < n) {
        // Remove the element going out of the window
        auto it_remove = p.find({v[l], l});
        if (it_remove != p.end()) {
            cost -= abs(it_remove->first - median);
            p.erase(it_remove);
        }

        // Add the new element coming into the window
        p.insert({v[r], r});
        
        // Find the new median
        it = p.find_by_order(mid);
        int new_median = it->first;

        // Adjust the cost incrementally
        for (const auto& elem : p) {
            if (elem.second != r) { // Avoid adding the cost for the new element twice
                cost += abs(elem.first - new_median) - abs(elem.first - median);
            }
        }
        cost += abs(v[r] - new_median); // Add the cost for the new element

        // Update the median
        median = new_median;

        cout << cost << " ";

        // Move the window
        l++;
        r++;
    }

    return 0;
}
