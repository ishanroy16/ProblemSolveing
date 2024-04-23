#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
    cin>>a>>b>>c;
    int ans1,ans2;
    
        ans1=a-1;
        ans2=abs(b-c)+(c-1);
        if(ans1<ans2) cout<<1<<"\n";
        else if(ans2<ans1) cout<<"2"<<"\n";
        else{
            cout<<3<<"\n";
        }
    }
    return 0;
}