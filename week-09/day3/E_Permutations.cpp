#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define nl "\n"
#define vi vector<int>
int main()
{
   ft;
   int n; cin>>n;
   vi a;
   if(n==2 || n==3)
   {
    cout<<"NO SOLUTION"<<"\n";
   } 
   else if(n==4)
   {
    cout<<3<<" "<<1<<" "<<4<<" "<<2;
   }
   else if(n==1)
   {
    cout<<1;
   }
   else{
        for(int i=n;i>0;i--)
        {
            if(i%2==0)
            {
                a.push_back(i);
            }
        }
        for(int i=n;i>0;i--)
        {
            if(i%2==1)
            {
                a.push_back(i);
            }
        }
        for(int val:a)
        {
            cout<<val<<" ";
        }
   }
    return 0;
}