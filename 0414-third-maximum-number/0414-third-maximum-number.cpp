class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        sort(nums.begin(),nums.end(),greater<int>());
        if(s.size()<=2)
        return *max_element(nums.begin(),nums.end());
        int t=0;
        s.clear();
        for(int i:nums)
        {
            s.insert(i);
            if(s.size()==3)
            return i;
        }
        return 0;
    }
};