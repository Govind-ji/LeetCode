class Solution {
    public int findMiddleIndex(int[] nums) {
        int s=0;
        for(int i:nums)s+=i;
        int n=nums.length;
        int t=0,i=0;
        for(i=0;i<n;i++)
        {
            s-=nums[i];
            if(t==s)break;
            t+=nums[i];
        }
        return t==s?i<n?i:-1:-1;        
    }
}