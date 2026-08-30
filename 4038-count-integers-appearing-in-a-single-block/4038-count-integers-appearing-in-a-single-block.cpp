class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i:nums)mp[i]++;
        int prev=nums[0];
        int cnt=0;
        int s=0;
        for(int i:nums)
        {
            if(i!=prev)
            {
                s+=cnt==mp[prev]?1:0;
                prev=i;
                cnt=1;
            }
            else
            cnt++;
        }
        return cnt==mp[prev]?s+1:s;
    }
};