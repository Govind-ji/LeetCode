class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int t=0;
        int maxi=0;
        queue<pair<pair<int,int>,int>> q;
        int dl[]={1,0,-1,0};
        int db[]={0,1,0,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});                    
                }
            }
        }
        while(!q.empty())
        {
            int f=q.front().first.first;
            int g=q.front().first.second;
            int t=q.front().second;
            q.pop();
            for(int p=0;p<4;p++)
            {
                int u=dl[p]+f;
                int v=db[p]+g;
                if(u>=0 && u<n && v>=0 && v<m && grid[u][v]==1)
                {
                    grid[u][v]=2;
                    q.push({{u,v},t+1});
                    maxi=max(maxi,t+1);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)if(grid[i][j]==1)return -1;
        }
        return maxi;
    }
};