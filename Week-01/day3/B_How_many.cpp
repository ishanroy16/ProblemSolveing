#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t;
    cin>>s>>t;
    int ans=0;
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            for(int k=0;k<101;k++)
            {
                if((i+j+k)<=s && (i*j*k)<=t)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}