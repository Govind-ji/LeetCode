class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        if(n<=3)return *max_element(nums.begin(),nums.end());
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        int maxi=0;
        for(int i=2;i<n-1;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        maxi=dp[n-2];
        dp.clear();
        dp[1]=nums[1];
        dp[2]=max(nums[1],nums[2]);
        for(int i=3;i<n;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return max(maxi,dp[n-1]);
    }
};