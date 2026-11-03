class Solution {
    public int minMergedInteger(int[] nums) {
        int n=nums.length;
        int mini=Integer.MAX_VALUE;
        for(int i=0;i<n;i+=2)
        {
            String t=""+nums[i]+nums[i+1];
            mini=Math.min(mini,Integer.parseInt(t));
        }
        return mini;        
    }
}