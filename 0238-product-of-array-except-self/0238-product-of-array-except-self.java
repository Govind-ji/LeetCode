class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int left[]=nums.clone();
        left[0]=nums[0];
        int right[]=nums.clone();
        right[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            left[i]*=left[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]*=right[i+1];
        }
        for(int i=0;i<n;i++)
        {
            int prod=1;
            if(i>0)
            prod=left[i-1];
            if(i<n-1)
            prod*=right[i+1];
            nums[i]=prod;
        }
        return nums;
    }
}