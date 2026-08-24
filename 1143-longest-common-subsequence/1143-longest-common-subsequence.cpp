class Solution {
public:
int lcs(string &t1,string &t2,int i1,int i2,vector<vector<int>> &dp)
{
    if(i1>=t1.size() || i2>=t2.size())return 0;
    if(dp[i1][i2]!=-1)return dp[i1][i2];
    if(t1[i1]==t2[i2])
    {
        return dp[i1][i2]=1+lcs(t1,t2,i1+1,i2+1,dp);
    }
    else
    {
        return dp[i1][i2]=max(lcs(t1,t2,i1+1,i2,dp),lcs(t1,t2,i1,i2+1,dp));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return lcs(text1,text2,0,0,dp);
    }
};