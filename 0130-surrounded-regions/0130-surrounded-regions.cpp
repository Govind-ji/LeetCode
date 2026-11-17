class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>>q;
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            if(board[i][m-1]=='O')
            {
                vis[i][m-1]=1;;
                q.push({i,m-1});
            }
            if(board[i][0]=='O')
            {
                q.push({i,0});
                vis[i][0]=1;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(board[n-1][j]=='O')
            {
                q.push({n-1,j});
                vis[n-1][j]=1;
            }
            if(board[0][j]=='O')
            {
                q.push({0,j});
                vis[0][j]=1;
            }
        }
        int dl[]={1,0,-1,0};
        int db[]={0,1,0,-1};
        while(!q.empty())
        {
            auto [i,j]=q.front();
            q.pop();
            for(int p=0;p<4;p++)
            {
                int u=i+dl[p];
                int v=j+db[p];
                if(u<n && u>=0 && v>=0 && v<m && !vis[u][v] && board[u][v]=='O')
                {
                    vis[u][v]=1;
                    q.push({u,v});
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O' && !vis[i][j])
                board[i][j]='X';
            }
        }
        return ;
    }
};