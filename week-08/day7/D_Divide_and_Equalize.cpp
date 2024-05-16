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
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vi a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
         map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=a[i];j++)
            {
                if(a[i]%j==0)
                {
                    while(a[i]%j==0)
                    {
                        cnt[j]++;
                        a[i]/=j;
                    }
                }
            }
            if(a[i]>1)
            {
                cnt[a[i]]++;
            }
        }
        bool flag=true;
            for(auto [x,y]:cnt)
            {
                // cout<<x<<" "<<y<<"\n";
                if(y%n!=0)
                {
                    flag=false;
                }
            }
            if(flag){
                yes;
            }
            else{
                no;
            }
           
    }
    return 0;
}