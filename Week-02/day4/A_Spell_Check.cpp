#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ss="Timur";
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        if(n==5)
        {
            if(s==ss)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }
        else{
                cout<<"NO"<<endl;
            }
    }
    return 0;
}