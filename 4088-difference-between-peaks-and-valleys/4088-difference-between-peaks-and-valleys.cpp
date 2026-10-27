class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        vector<int> hill;
        vector<int> valley;
        int n=nums.size();
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            hill.push_back(nums[i]);
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])
            valley.push_back(nums[i]);
        }
        return accumulate(hill.begin(),hill.end(),0)-accumulate(valley.begin(),valley.end(),0);
    }
};