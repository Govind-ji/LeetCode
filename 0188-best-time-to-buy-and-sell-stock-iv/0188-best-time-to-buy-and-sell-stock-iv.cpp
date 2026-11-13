class Solution {
public:
int func(vector<int> & prices,int i,bool b,int t,vector<vector<vector<int>>>& dp,int n)
{
    if(i==n || t==0)return 0;
    if(dp[i][b][t]!=-1)
    return dp[i][b][t];
    int profit=0;
    if(b)
    {
        profit=max(-prices[i]+func(prices,i+1,!b,t,dp,n),func(prices,i+1,b,t,dp,n));
    }    
    else
    {
        profit=max(prices[i]+func(prices,i+1,!b,t-1,dp,n),func(prices,i+1,b,t,dp,n));
    }
    return dp[i][b][t]=profit;
}
    int maxProfit(int k, vector<int>& prices) {
                
        vector<vector<vector<int>>> mp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
        return func(prices,0,1,k,mp,prices.size());
    }
};