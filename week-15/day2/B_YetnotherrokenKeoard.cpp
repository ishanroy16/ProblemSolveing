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
   int t; cin>>t;
   while(t--){
    string s ; cin>>s;
    int n=s.size();
    vector<int>cap,sam;
    vector<bool>v(n+1,true);
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            if(!cap.empty())
            {
                v[cap.back()]=false;
                cap.pop_back();
            }
            v[i]=false;
        }
        else if(s[i]=='b'){
            if(!sam.empty())
            {
                v[sam.back()]=false;
                sam.pop_back();
            }
            v[i]=false;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            cap.pb(i);
        }
        else{
            sam.pb(i);
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==true){
            cout<<s[i];
        }
    }
    cout<<nl;
   } 
    return 0;
}