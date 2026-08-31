class Solution {
    int moves(int l,int r,String s,int [][]dp)
    {
        if(l>=r)return 0;
        if(dp[l][r]!=0)return dp[l][r];
        if(s.charAt(l)!=s.charAt(r))
        {
            return dp[l][r]=1+Math.min(moves(l+1,r,s,dp),moves(l,r-1,s,dp));
        }
        return dp[l][r]=moves(l+1,r-1,s,dp);
    }
    public int minInsertions(String s) {
        int n=s.length();
        int l=0,r=n-1;
        int[][]dp=new int [n][n];
        return moves(l,r,s,dp);
    }
}