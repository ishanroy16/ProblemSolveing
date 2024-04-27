#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        // cout<<n<<" "<<c;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            a[i]+=(i+1);
        }
        int ans=0;
        long long sum=0;
        sort(a.begin(),a.end());
        for(int x:a)
        {
            if(sum+x>c) break;
            ans++;
            sum+=x;
        }
        cout<<ans<<"\n";
    }
    return 0;
}