#include<bits/stdc++.h>
using namespace std;
int bisop_attack(int n,int m,vector<vector<int>>&board)
{
    int max_sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int cur_sum=board[i][j];
            int x,y;
            x=i+1,y=j+1;
            while(x<n && y<m)
            {
                cur_sum+=board[x][y];
                x++;
                y++;
            }
            x=i-1,y=j-1;
            while(x>=0 && y>=0)
            {
                cur_sum+=board[x][y];
                x--;
                y--;
            }
            x=i+1,y=j-1;
            while(x<n && y>=0)
            {
                cur_sum+=board[x][y];
                x++;
                y--;
            }
            x=i-1,y=j+1;
            while(x>=0 && y<m)
            {
                cur_sum+=board[x][y];
                x--;
                y++;
            }
            max_sum=max(max_sum,cur_sum);
        }
    }
    return max_sum;
}
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>board(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>board[i][j];
            }
        }
        int result=bisop_attack(n,m,board);
        cout<<result<<"\n";
    }
    return 0;
}