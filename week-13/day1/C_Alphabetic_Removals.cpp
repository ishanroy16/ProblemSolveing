#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
int32_t main()
{
   ft;
   int n,k; cin>>n>>k;
   string s; cin>>s;
   vi a(26);
    for(char c:s)
    {
        a[c-'a']++;
    }
    int pos=26;
    for(int i=0;i<26;i++)
    {
        if(k>=a[i]){
            k-=a[i];
        }
        else{
            pos=i;
            break;
        }
    }
    // cout<<pos<<nl;
    string ans;
    int rem=k;
    for(char ch:s)
    { 
        int curr=ch-'a';
        if((curr>pos) ||(curr==pos && rem==0)){
            ans+=ch;
        }
        else if(curr==pos){
            rem--;
        }
    }
    cout<<ans<<nl;
    return 0;
}