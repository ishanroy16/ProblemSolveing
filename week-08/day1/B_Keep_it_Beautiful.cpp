#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
void solve()
{
    int n; cin>>n;
    bool f=false;
    ll st,ed;
    ll mx=-1;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int tmp; cin>>tmp;
        if(i==0) st=tmp;
        if(tmp>=mx && f==false)
        {
            v.push_back(1);
            mx=tmp;
        }
        else{
            if(tmp<=st && f==false)
            {
                v.push_back(1);
                ed=tmp;
                f=true;
            }
            else if(tmp<=st && tmp>=ed)
            {
                v.push_back(1);
                ed=tmp;

            }
            else v.push_back(0);
        }
    }
    for(int val:v)
    {
        cout<<val;
    }
    cout<<"\n";
}
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}