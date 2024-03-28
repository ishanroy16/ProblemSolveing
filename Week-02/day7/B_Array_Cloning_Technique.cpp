#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int maxa=INT_MIN;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
            maxa=max(maxa,m[x]);
        }
        if(maxa==n)
        {
         cout<<0<<endl;
        }
        else{
            int cnt=1;
            while(maxa<=n)
            {
                if(maxa+maxa>=n)
                {
                    cnt+=(n-maxa);
                    break;
                }
                cnt+=maxa;
                maxa=maxa*2;
                cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}