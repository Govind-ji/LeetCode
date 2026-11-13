class Solution {
public:
int dphelp(int amount,vector<int>& coins,int i,int n,int dp[][300])
{
    if(amount==0)return 1;
    if(amount<0 || i==n)return 0;
    if(dp[amount][i]!=-1)return dp[amount][i];
    int pick=dphelp(amount-coins[i],coins,i,n,dp);
    int unpick=dphelp(amount,coins,i+1,n,dp);
    return dp[amount][i]=pick+unpick;
}
    int change(int amount, vector<int>& coins) {
        int dp[10000][300];
        int n=coins.size();
        memset(dp,-1,sizeof(dp));
        return dphelp(amount,coins,0,n,dp);
    }
};