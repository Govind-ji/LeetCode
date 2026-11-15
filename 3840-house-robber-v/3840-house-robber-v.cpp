class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n=colors.size();
        vector<long long>dp(n,0ll);
        if(n<2)return nums[0];
        dp[0]=nums[0];
        dp[1]=colors[1]==colors[0]?max(nums[0],nums[1]):nums[1]+nums[0];
        for(int i=2;i<n;i++)
        {
            if(colors[i]!=colors[i-1])
            dp[i]=dp[i-1]+nums[i];
            else
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[n-1];

    }
};