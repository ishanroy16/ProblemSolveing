#include<bits/stdc++.h>
using namespace std;
int find_tallest_shoter(vector<int>&height,int target)
{
    int l=0,r=height.size(),tallestshotter=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(height[mid]<target)
        {
            tallestshotter=max(tallestshotter,height[mid]);
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return tallestshotter;
}
int find_shotest_toller(vector<int>&height,int target)
{
    int l=0,r=height.size(),shotesttaller=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(height[mid]>target)
        {
            shotesttaller=max(shotesttaller,height[mid]);
           
             r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return shotesttaller;
}
int main()
{
    int n; cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++) cin>>height[i];
    sort(height.begin(),height.end());
    int q; cin>>q;
    while(q--)
    {
        int lucchiHeight; cin>>lucchiHeight;
        int tallestshotter=find_tallest_shoter(height,lucchiHeight);
        int shotesttaller=find_shotest_toller(height,lucchiHeight);
        if(tallestshotter!=-1)
        {
            cout<<tallestshotter<<" ";
        }
        else{
            cout<<"X";
        }
        if( shotesttaller!=-1)
        {
            cout<<shotesttaller<<"\n";
        }
        else{
            cout<<"X"<<"\n";
        }
    }

    return 0;
}