class Solution {
public:
int dp(vector<int>& nums,int i,int target,map<pair<int,int>,int>&mp)
{
    if(i==nums.size())return target==0;
    if(mp.count({i,target}))return mp[{i,target}];

    int p=dp(nums,i+1,target-nums[i],mp);
    int n=dp(nums,1+i,target+nums[i],mp);
    return mp[{i,target}]=p+n;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>,int>mp;
        return dp(nums,0,target,mp);
    }
};