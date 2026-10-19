class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> t;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            t.push_back(i);
        }
        return t;
    }
};