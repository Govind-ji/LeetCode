class Solution {
    public int[] shuffle(int[] nums, int n) {
        int ar[]=new int [2*n];
        int p=0;
        for(int i=0;i<2*n;i+=2)
        {
            ar[i]=nums[p];
            ar[i+1]=nums[p+n];
            p++;
        }
        return ar;
    }
}