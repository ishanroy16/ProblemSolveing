#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        ll sum=n;
        while(n!=0)
        {
            sum+=n/2;
            n=n/2;
        }
        cout<<sum<<endl;
    }
    return 0;
}