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
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
    // string s; cin>>s;
    vector<char>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int y=max(n,m);
    vector<bool>v(y+1,false);
    for(int i=0;i<m;i++){
        int x; cin>>x;
        v[x]=true;
    }
    // string s2 ; cin>>s2;
    vector<char>s2(m);
    for(int i=0;i<m;i++) cin>>s2[i];
    sort(s2.begin(),s2.end());
    // cout<<s2[3];
    vector<char>ch(n);
    int k=0;
    for(int i=0;i<n;i++){
        if(v[i+1]==true)
        ch[i]=s2[k++];
        else ch[i]=s[i];
    }
    for(char c:ch){
        cout<<c;
    }
    cout<<nl;
    }
    return 0;
}