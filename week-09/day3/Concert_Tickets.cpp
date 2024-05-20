#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
     cin>>n>>m;
     multiset<int>st;
     for(int i=0;i<n;i++)
     {
        int x; cin>>x;
        st.insert(x);
     }
     for(int i=0;i<m;i++)
     {
        int b; cin>>b;
        auto it=st.upper_bound(b);
        if(it==st.begin())
        {
            
            cout<<-1<<"\n";
            continue;
        }
        else{
            it--;
        cout<<*it<<"\n";
        st.erase(it);
        }
     }
    return 0;
}