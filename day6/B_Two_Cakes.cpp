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
    ll n, a, b, mn, mx;
        cin >> n >> a >> b;
        mn = min(a, b);
        mx = max(a, b);
        ll d = mx / mn;
        if (d >= n-1)
        {
            cout << mn << endl;
            
        }
        else{
            ll d1 = n / (d + 1);
        if (d1 == 0)
        {
            d1++;
        }
        ll d2 = n - d1;
        ll ans = min(mn / d1, mx / d2);
        while (ans + 1 <= a && (n - a / (ans + 1)) * (ans + 1) <= b)
        {
            ans++;
        }
        
        cout << ans << endl;
        }
    return 0;
}