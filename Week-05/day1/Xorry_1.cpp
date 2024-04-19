#include<bits/stdc++.h>
using namespace std;
pair<int,int>findpair(int x)
{
    
    int a=0,b=0;
    int bitposition=0;
    while((1<<bitposition)<=x)
    {
        bitposition++;
    }
    int msb=1<<(bitposition-1);
    a=msb;
    b=a^x;
    return {b,a};
}
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int x; cin>>x;
        pair<int,int>xorrypair=findpair(x);
        cout<<xorrypair.first<<" "<<xorrypair.second<<"\n";
    }
    return 0;
}