class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums)mp[i]++;
        int maxi=0;
        int r=0;
        for(auto i:mp)
        {
            if(maxi<i.second)
            {
                r=i.first;
                maxi=i.second;
            }
        }
        return r;
    }
};