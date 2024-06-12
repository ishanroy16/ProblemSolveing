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
    int x; cin>>x;
    vi a(32);
    for(int i=29;i>=0;i--)
    {
        a[i]=(x>=(1<<i));
        x%=(1<<i);
    }
    for(int i=0,j ;i<32;)
    {
        if(a[i]==0)
        {
            i++;
            continue;
        }
        j=i+1;
        while(a[j]){
            a[j]=0;
            j++;
        }
        if(j>i+1){
            a[j]=1;
            a[i]=-1;
        }
        i=j;
    }
    cout<<32<<nl;
    for(int val:a)
    {
        cout<<val<<" ";
    }
    cout<<nl;
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