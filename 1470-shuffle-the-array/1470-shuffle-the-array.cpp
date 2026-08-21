class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> g;
        for(int i=0;i<n;i++)
        {
            g.push_back(nums[i]);
            g.push_back(nums[i+n]);
        }
        return g;
    }
};