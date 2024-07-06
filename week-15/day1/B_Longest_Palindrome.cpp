#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define pb push_back
#define vi vector<long long>
string s[101];
int32_t main()
{
   ft;
   int n,m; cin>>n>>m;
   set<string>dis;
   for(int i=0;i<n;i++){
     cin>>s[i];
    dis.insert(s[i]);
   }
   vector<string>left,right;
   string mid;
   for(int i=0;i<n;i++){
    string rev=s[i];
    reverse(rev.begin(),rev.end());
    if(rev==s[i]){
        mid=s[i];
    }
    else if(dis.find(rev)!=dis.end()){
        left.pb(s[i]);
        right.pb(rev);
        dis.erase(s[i]);
        dis.erase(rev);
    }
   }
   cout<<left.size()*m*2+mid.size()<<nl;
   for(string s:left){
    cout<<s;
   }
   cout<<mid;
   reverse(right.begin(),right.end());
   for(string s:right){
    cout<<s;
   }
    return 0;
}