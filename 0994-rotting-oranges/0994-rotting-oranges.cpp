class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dl[]={0,-1,0,1};
        int db[]={1,0,-1,0};
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==2)
                q.push({{i,j},0});
            }

        }
        int maxi=0;
        while(!q.empty())
        {
            int u=q.front().first.first;
            int v=q.front().first.second;
            int t=q.front().second;
            q.pop();
            for(int p=0;p<4;p++)
            {
                int i=dl[p]+u;
                int j=db[p]+v;
                if(i>=0 && j>=0 && i<n && j<m && grid[i][j]==1)
                {
                    grid[i][j]=2;
                    q.push({{i,j},t+1});
                    maxi=max(maxi,t+1);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)return -1;
            }
        }
        return maxi;
    }
};