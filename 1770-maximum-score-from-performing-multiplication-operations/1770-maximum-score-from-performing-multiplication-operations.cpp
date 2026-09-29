class Solution {
public:
int solve(int i,int l,vector<int> &nums,vector<int>&multiplier,vector<vector<int>>&dp,int n,int m)
{
    if(i==m)return 0;
    if(dp[i][l]!=-1)return dp[i][l];
    int r=n-1-(i-l);
    int left=multiplier[i]*nums[l]+solve(i+1,l+1,nums,multiplier,dp,n,m);
    int right=multiplier[i]*nums[r]+solve(i+1,l,nums,multiplier,dp,n,m);
    return dp[i][l]=max(left,right);
}
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        vector<vector<int>> dp(m+1,vector<int>(m+1,-1));
        return solve(0,0,nums,multipliers,dp,n,m);
    }
};