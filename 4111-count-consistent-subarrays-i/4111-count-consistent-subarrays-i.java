class Solution {
    public int countConsistent(int[] nums) {
        int n=nums.length;
        int t=0;
        for(int i=0;i<n;i++)
        {
            int bit=nums[i];
            int mini=nums[i];
            for(int j=i;j<n;j++)
            {
                bit&=nums[j];
                mini=Math.min(mini,nums[j]);
                if(bit==mini)
                t++;
            }
        }
        return t;
    }
}