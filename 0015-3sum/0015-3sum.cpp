class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0,right=0;
        set<vector<int>> v;
        for(int i=0;i<n-2;i++)
        {
            left=i+1;
            right=n-1;
            while(left<right)
            {
                int s=nums[left]+nums[right]+nums[i];
                if(s==0)
                v.insert({nums[i],nums[left],nums[right--]});
                else if(s>0)
                right--;
                else
                left++;
            }

        }
        vector<vector<int>> t(v.begin(),v.end());
        return t;
    }
};