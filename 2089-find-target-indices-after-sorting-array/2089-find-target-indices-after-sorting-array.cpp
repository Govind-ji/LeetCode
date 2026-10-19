class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n=nums.size();
        int mini=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<target)
            mini++;
            if(nums[i]==target)
            r++;
        }
        if(!r)return {};
        vector<int> t;
        for(int i=0;i<r;i++)
        {
            t.push_back(mini);
            mini++;
        }
        return t;
    }
};