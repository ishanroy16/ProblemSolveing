#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<string>v;
        string s;
        map<string, int>mp;
        int sz = n*3;
        int sz3 = n*3;
        while(sz3--){
            cin>>s;
            mp[s]++;
            v.push_back(s);
        }   
        int cnt = 0;
        int k = 0, cnt1 = 0, cnt2= 0, cnt3 = 0;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(k < sz){
                    if(i == 1) {
                        if(mp[v[k]] == 1) cnt1 += 3;
                        else if(mp[v[k]] == 2) cnt1 += 1;
                    }
                    else if(i == 2){
                        if(mp[v[k]] == 1) cnt2+= 3;
                        else if(mp[v[k]] == 2) cnt2+= 1;
                    }else if(i == 3){
                        if(mp[v[k]] == 1) cnt3 += 3;
                        else if(mp[v[k]] == 2) cnt3 += 1;
                    }
                   
                }
                k++;
            }
        }
        cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
    }
    return 0;
}