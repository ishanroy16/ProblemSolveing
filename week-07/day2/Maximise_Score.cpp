#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ft  ios::sync_with_stdio(false);  cin.tie(NULL);
const int MOD=1e9+7;
#define y cout<<"YES"<<"\n";
#define no cout<<"NO"<<"\n";
#define vi vector<ll>
int main()
{
    ft;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vi v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll score=INT_MAX;
        score=min(score,abs(v[0]-v[1]));
        score=min(score,abs(v[n-1]-v[n-2]));
        for(int i=1;i<n-1;i++)
        {
            
            score=min(score,max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])));
        }
        cout<<score<<"\n";
    }
    return 0;
}