#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        vector<string>str;
        int n, k; cin>>n>>k;
        for (int i = 0; i < n; i++)
        {
            string s; cin>>s;
            str.push_back(s);
        }

        
        int BestDf = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int result = 0;
                for (int l = 0; l < str[i].size(); l++)
                {
                    result += abs(str[j][l] - str[i][l]);
                }
                if(result < BestDf) BestDf = result;
            }
        }
        cout<<BestDf<<endl;
    }
    return 0;
}