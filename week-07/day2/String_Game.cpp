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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s;
        cin>>s;
        int win=0;
        if(n==1)
        {
            cout<<"Ramos"<<"\n";
        }
        else{
          int has=n;
            for(int i=0;i<n;i++)
            {
                if(s[i]!=s[i+1] && (i+1)<n)
                {
                    has-=2;
                    win++;
                }
                 i++;
                
            }
            if(win%2==1){
                cout<<"Zlatan"<<"\n";
            }
            else{
                cout<<"Ramos"<<"\n";
            }
        }
    }
    return 0;
}