#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>&v)
{
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j)
    {
        if(v[i]!=v[j]){
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int i=0,j=n-1;
        int ans=-1;
        int a,b;
        while(i<j)
        {
            if(ar[i]!=ar[j])
            {
                ans=1;
                a=ar[i];
                b=ar[j];
                break;
            }
            i++;
            j--;
        }
        if(ans==-1)
        {
            cout<<"YES"<<endl;
        }
        else{
            vector<int>v1;
            vector<int>v2;
            for(int i=0;i<n;i++)
            {
                if(ar[i]!=a)
                {
                    v1.push_back(ar[i]);
                }
            }
            for(int i=0;i<n;i++)
            {
                if(ar[i]!=b)
                {
                    v2.push_back(ar[i]);
                }
            }
            int ans1=solve(v1);
            int ans2=solve(v2);
            if(ans1==1 || ans2==1)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}