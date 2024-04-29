#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
     cin.tie(NULL);
        int i=1;
     while(true)
     {
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0)
        {
            break;
        }
        cout<<"CASE#"<<" "<<i++<<":"<<"\n";
        
        vector<int> ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar.begin(),ar.end());
        while(q--)
        {
            
            int x; cin>>x;
            bool flag=false;
             for(int c:ar)
             {
                if(x==c)
                {
                    flag=true;
                }
             }
             if(flag)
             {
                auto val=lower_bound(ar.begin(),ar.end(),x)-ar.begin();
                 cout<<x<<" "<<"found at"<<" "<<val+1<<"\n";
             }
             else{
                cout<<x<<" "<<"not found"<<"\n";
             }
             
        }
     }
    return 0;
}