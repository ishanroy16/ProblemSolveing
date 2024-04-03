#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, i, j;
        cin >> n;

        ll a[n][n - 1];
        for (i = 0; i < n; i++) {
            for (j = 0; j < n - 1; j++) {
                cin >> a[i][j];
            }
        }

        map<ll, ll> mp;
        for (i = 0; i < n; i++) 
        {
            mp[a[i][n-2]]++;
            
        }

        ll maximumNumber = -1e18, mx_val= 0;
        for (auto m : mp) {
            if (m.second > mx_val) {
                maximumNumber = m.first;
                mx_val = m.second;
            }
        }


        
        for (i = 0; i < n; i++) {
            if (a[i][n-2] != maximumNumber) {
                for (j = 0; j < n - 1; j++) {
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << maximumNumber << " ";
        cout << endl;
    }

    return 0;
}