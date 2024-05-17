#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<int>
int main()
{
    ft;
    int n; cin>>n;
    if(n%2==0)
    {
        int num=n/2;
        cout<<num<<"\n";
        for(int i=0;i<num;i++)
        {
            cout<<"2"<<" ";
        }
    }
    else{
        int num=(n-3)/2;
        cout<<num+1<<"\n";
        for(int i=0;i<num;i++)
        {
            cout<<"2"<<" ";
        }
        cout<<3;
    }
    return 0;
}