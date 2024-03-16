#include<bits/stdc++.h>
using namespace std;
vector<int>v;
vector<int>v2;
 void fun(int n)
 {
    if(n==0) return;
    int ans=n%10;
    v.push_back(ans);
     int d=n/10;
     fun(d);
 }
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int n;
     cin>>n;
     fun(n);
     int l=4;
     int k=l-v.size();
     reverse(v.begin(),v.end());
     while(k--)
     {
        v2.push_back(0);
     }
     for(int c:v)
     {
        v2.push_back(c);
     }
     for(int c:v2)
     {
        cout<<c;
     }
    return 0;
}