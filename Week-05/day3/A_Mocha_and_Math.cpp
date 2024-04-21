#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        int andi=ar[0];
        for(int i=1;i<n;i++){
            andi  =andi & ar[i];
        }
        cout<<andi<<"\n";
    }
    return 0;
}