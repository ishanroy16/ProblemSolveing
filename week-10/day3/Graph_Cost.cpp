#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
using namespace std;
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> val,idx;
        long long tol_cost = 0;

        for (int i = 0; i < n; i++)
        {
            while (val.size() > 1 && val.top() > a[i])
            {
                int cur = val.top();
                val.pop();
                if (cur >= val.top())
                {
                    idx.pop();
                }
                else
                {
                    val.push(cur);
                    break;
                }
            }
            val.push(a[i]);
            idx.push(i);
        }

        int last_item = val.top();
        val.pop();
        int last_idx = idx.top();
        idx.pop();

        while (!idx.empty())
        {
            tol_cost += max(last_item, val.top()) * (last_idx - idx.top());
            last_item = val.top();
            val.pop();
            last_idx = idx.top();
            idx.pop();
        }

        cout << tol_cost << "\n";
    }

    return 0;
}