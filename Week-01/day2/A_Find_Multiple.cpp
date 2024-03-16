#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int a,b,c;
     cin>>a>>b>>c;
     vector<int>v;
     for(int i=a;i<=b;i++)
     {
        if(i%c==0)
        {
            v.push_back(i);
            break;
        }
        
     }
     if(v.size()==0) cout<<-1<<"\n";
     else{
        cout<<v.front()<<"\n";
     }
     
    return 0;
}