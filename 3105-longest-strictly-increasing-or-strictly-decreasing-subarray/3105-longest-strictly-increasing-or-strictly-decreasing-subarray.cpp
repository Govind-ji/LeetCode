class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int r=1;
        int f=1;
        int maxi=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            r++;
            else
            r=1;
            if(nums[i]<nums[i-1])
            f++;
            else
            f=1;
            maxi=max(maxi,max(r,f));
        }
        return max(maxi,max(r,f));
    }
};