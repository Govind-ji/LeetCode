class Solution {
public:
int dphelp(vector<int>&prices,vector<vector<vector<int>>>& dp,int n,int i,int b,int t)
{
    if(i==n||t<0)return 0;
    if(dp[i][b][t]!=-1)return dp[i][b][t];
    int prof;
    if(b)
    {
        prof=max(dphelp(prices,dp,n,i+1,!b,t)-prices[i],dphelp(prices,dp,n,i+1,b,t));
    }
    else
    {
        prof=max(dphelp(prices,dp,n,i+1,!b,t-1)+prices[i],dphelp(prices,dp,n,i+1,b,t));
    }
    return dp[i][b][t]=prof;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(2,-1)));
        return dphelp(prices,dp,n,0,1,1);
    }
};