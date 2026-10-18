class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int li=0,lj=0;
        int i=0,j=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        while(i>=0 && i<n && j>=0 && j<m && vis[i][j]==0)
        {
            li=i;
            lj=j;
            vis[i][j]=1;
            if(grid[i][j]=='R')
            j++;
            else if(grid[i][j]=='L')
            j--;
            else if(grid[i][j]=='U')
            i--;
            else
            i++;
        }
        return {li,lj};
    }
};