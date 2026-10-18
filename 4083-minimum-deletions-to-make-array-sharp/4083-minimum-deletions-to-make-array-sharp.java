class Solution {
    public int minDeletions(int[] nums) {
        int t=1,l=nums[0];
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]==l)continue;
            t++;
            l=nums[i];
        }
        return nums.length-t;
    }
}