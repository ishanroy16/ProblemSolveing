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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        set<char>st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
        }
        vector<int>v(26,INT_MAX);
        for(char ch:st)
        {
            int l=0,r=n-1,c=0;
            while(l<r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else{
                    if(s[l]==ch)
                    {
                        l++;
                        c++;
                    }
                    else if(s[r]==ch)
                    {
                        r--;
                        c++;
                    }
                    else {
                        c=-1;
                        break;
                    }
                }
            }
            if(c!=-1){
                v[ch-'a']=c;
            }
        }
        sort(v.begin(),v.end());
        if(v[0]==INT_MAX) cout<<"-1\n";
        else cout<<v[0]<<"\n";
    }
    return 0;
}