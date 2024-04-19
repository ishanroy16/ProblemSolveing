#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin>>x;
    int a=1,b=0,cnt=0;
    while(a*2<=x)
    {
        a=a*2;
        cnt++;
    }
    int ans=1;
    bool flag=false;
    for(int i=cnt-1;i>=0;i--)
    {
        if((x&1<<i))
        {
            b=b|(1<<i);
            flag=true;
        }
        else{
            if(flag) ans=ans*2;
        }
    }
    cout<<ans<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}