class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int s=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        int t=0,i=0;
        for(i=0;i<n;i++)
        {
            s-=nums[i];
            if(t==s)break;
            t+=nums[i];
        }
        return t==s?i<n?i:-1:-1;
    }
};