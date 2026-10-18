class Solution {
    public int[] lastVisitedCell(char[][] grid) {
         int li=0,lj=0;
        int i=0,j=0;
        int n=grid.length;
        int m=grid[0].length;
        int  vis[][]=new int [n][m];
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
        return new int[]{li,lj};       
    }
}