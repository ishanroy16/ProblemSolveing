#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   ll a,b; cin>>a>>b;
    if(a==b)
    {
        cout<<"="<<nl;
    }
    else{
        long double one=b*log(a);
        long double two=a*log(b);
        // cout<<one<<" "<<two<<nl;
        if(one>two) cout<<">"<<nl;
        else if(one<two) cout<<"<"<<nl;
        else cout<<"="<<nl;
    }
    return 0;
}