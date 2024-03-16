#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];    
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int ar[n+m];
    for(int i=0;i<n;i++)
    {
        ar[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        ar[n+i]=b[i];
    }
    sort(ar,ar+(n+m));
    for(int i=0;i<n+m;i++)
    {
       cout<<ar[i]<<" ";
    }
    return 0;
}