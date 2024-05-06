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
   int t;               cin>>t;
   while(t--){
      string s;         cin>>s;
      int n=s.size();
 
      vector<int> cap,sml;
      vector<bool> v(n+2,true);
 
      for(int i=0;i<n;i++){
         if(s[i]=='b'){
            if(!sml.empty()){
               v[sml.back()]=false;
               sml.pop_back();
            }
            v[i]=false;
         }
         else if(s[i]=='B'){
            if(!cap.empty()){
               v[cap.back()]=false;
               cap.pop_back();
            }
            v[i]=false;
         }
         else if(s[i]>='A' && s[i]<='Z'){
            cap.push_back(i);
         }
         else{
            sml.push_back(i);
         }
 
      }
 
      for(int i=0;i<n;i++){
         if(v[i]){
            cout<<s[i];
         }
      }
      cout<<"\n";
 
 
   }
    return 0;
}