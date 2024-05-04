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
        vi a(n),b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool found=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i] || (b[i]-a[i])>1)
            {
                found=false;
                break;
            }
        }
        if(found){
            y;
        }
        else no;
    }
    return 0;
}