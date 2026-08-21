class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> f;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            f.push_back(s);

        }
        return f;
    }
};