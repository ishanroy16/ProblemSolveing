#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int mx=INT_MIN;
    if((a+b)>mx)
    {
        mx=a+b;
    }
    if((a+(a-1))>mx)
    {
        mx=a+(a-1);
    }
    if(b+(b-1)>mx)
    {
        mx=b+(b-1);
    }
    cout<<mx<<"\n";
    return 0;
}