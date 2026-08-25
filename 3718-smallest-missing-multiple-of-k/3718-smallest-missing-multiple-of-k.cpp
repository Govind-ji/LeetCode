class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int p=1;
        unordered_map<int,int> mp;
        for(int i:nums)
        mp[i]++;
        while(true)
        {
            if(mp[p*k]==0)return p*k;
            p++;
        }
        return 1;
    }
};