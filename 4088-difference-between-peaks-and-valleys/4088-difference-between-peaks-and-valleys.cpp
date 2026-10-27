class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            s+=nums[i];
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])
            s-=nums[i];
        }
        return s;
    }
};