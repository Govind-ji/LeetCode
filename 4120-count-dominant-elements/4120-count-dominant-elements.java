class Solution {
    public int countDominantElements(int[] nums) {
        int n=nums.length;
        int r=0;
        if(n==1)return 1;
        if(nums[0]>=nums[1])r++;
        if(nums[n-1]>=nums[n-2])r++;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]>=(nums[i-1]+nums[i+1])/2.0)r++;
        }
        return r;
    }
}