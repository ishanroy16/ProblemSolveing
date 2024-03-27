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
        set<int>s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int s1=s.size();
        if((n-s1)%2==1)
        {
            cout<<s1-1<<endl;
        }
       else cout<<s1<<endl;
    }
    return 0;
}