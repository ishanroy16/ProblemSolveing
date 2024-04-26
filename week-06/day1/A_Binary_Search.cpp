#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    while(k--)
    {
        int key; cin>>key;
        int l=0,r=n-1;
        int idx=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(ar[mid]==key)
        {
            idx=mid;
            break;
        }
        else if(ar[mid]<key)
        {
           
             l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(idx==-1)
    {
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
    }
    }
    return 0;
}