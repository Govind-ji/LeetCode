
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxi=0;
        vector<int> mini(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-2;i>=0;i--)
        {
            mini[i]=min(mini[i],mini[i+1]);
        }
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            if(maxi-mini[i]<=k)
            return i;
        }
        return -1;
    }
};