class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int t=0;
        for(int i:nums)
        {
            if(i==0)t++;
        }
        int r=0;
        int n=nums.size();
        for(int i=0;i<n-t;i++)
        {
            if(nums[i]==0)r++;
        }
        return r;
    }
};