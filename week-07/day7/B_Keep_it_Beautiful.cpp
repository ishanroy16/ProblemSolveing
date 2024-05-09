#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vi ar(n); 
        string s="";
        int a=0;
        for(int i=0;i<n;i++) cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            if(ar[0]<=ar[i])
            {
                s+='1';
            }
            else {
                a=i;
                break;
            }
        }
        if(a>0)
        {
            for(int i=a;i<n;i++)
        {
            if(ar[0]>=ar[i])
            {
                s+='1';
            }
            else s+='0';
        }
        }

        cout<<s<<"\n";
    }
    return 0;
}