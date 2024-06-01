#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
void solve()
{
    string s; cin>>s;
    int n=s.size();
    int m=n;
    m+=n-2;
    cout<<3<<nl;
    cout<<"L"<<" "<<n-1<<nl;
    cout<<"R"<<" "<<n-1<<nl;
    cout<<"R"<<" "<<m+1<<nl;
}
int32_t main()
{
   ft;
   solve(); 
    return 0;
}