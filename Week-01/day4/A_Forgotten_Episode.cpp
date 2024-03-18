#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=1;i<n;i++)
    {
        cin>>ar[i];
    }
   
    int freq[n];
    for(int i=1;i<=n;i++)
    {
        freq[i]=0;
    }
    for(int i=1;i<n;i++)
    {
       freq[ar[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(freq[i]==0)
        {
            cout<<i;
        }
    }

    return 0;
}