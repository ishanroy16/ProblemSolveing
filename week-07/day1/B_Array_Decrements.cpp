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
        bool found=true;
        ll mx=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i]) {
                found=false;
            }
            else{
                if(b[i]==0)
                {
                    mx=max(mx,a[i]);
                }
                else{
                    int diff=a[i]-b[i];
                    mp[diff]++;
                }
            }
        }
        int x=-1;
        for(auto it:mp)
        {
           x= it.first;
        }
        if(mp.size()>1)
        {
            found=false;
        }
        if(x!=-1 && mx>x) found=false;
        if(found){
            y;
        }
        else no;
    }
    return 0;
}