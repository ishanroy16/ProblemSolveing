#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve(){
    int n, k, x;
    cin >> n >> k >> x;
    
    int A[n + 1] = {};
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    
    sort(A + 1, A + n + 1, greater<int>());

    for (int i = 1; i <= n; i++)
        A[i] += A[i - 1];
    
    int ans = -1e9;
    for (int i = 0; i <= k; i++)
        ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);
    
    cout<<ans<<"\n";
}

int32_t main()
{
   ft;
   int t; cin>>t;
   while(t--)
   {
    solve();
   } 
    return 0;
}