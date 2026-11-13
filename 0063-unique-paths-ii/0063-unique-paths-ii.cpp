class Solution {
public:
int dphelp(int i,int j,vector<vector<int>>& dp,vector<vector<int>> & og)
{
    if(i==0 && j==0)return 1;
    if(i<0 || j<0 ||og[i][j])return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    int up=dphelp(i-1,j,dp,og);
    int left=dphelp(i,j-1,dp,og);
    return dp[i][j]=up+left;
}
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
        if(og[0][0]==1)return 0;
       int n=og.size();
       int m=og[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return dphelp(n-1,m-1,dp,og);
    }
};