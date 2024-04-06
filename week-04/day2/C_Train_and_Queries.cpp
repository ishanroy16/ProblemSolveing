#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<int,int>left,right;
    for(int i=0;i<n;i++)
    {
        if(!left[v[i]])
        {
            left[v[i]]=i;
        }
        right[v[i]]=i;
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(left[l] && right[r] && left[l]<right[r])
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}