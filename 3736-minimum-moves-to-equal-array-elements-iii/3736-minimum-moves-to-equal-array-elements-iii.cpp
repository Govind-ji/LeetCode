class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int s=0;
        for(int i:nums)
        s+=abs(maxi-i);
        return s;
    }
};