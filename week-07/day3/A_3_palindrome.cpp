#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define y cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
int main()
{
    ft;
    int n; cin>>n;
    for(int i=0;i<n;)
    {
        if(i++<n) cout<<"a";
        if(i++<n) cout<<"a";
        if(i++<n) cout<<"b";
        if(i++<n) cout<<"b";
    }
    return 0;
}