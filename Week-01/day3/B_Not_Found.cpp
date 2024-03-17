#include<bits/stdc++.h>
using namespace std;
bool freq[26];
int main()
{
    string s;
    cin>>s;
    
    memset(freq,false,sizeof(freq));
    for(char x:s)
    {
        freq[x]=true;
    }
    for(char i='a';i<='z';i++)
    {
        if(freq[i]==false)
        {
            char ch=i;
            cout<<ch<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}