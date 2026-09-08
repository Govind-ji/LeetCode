class Solution {
    public int trap(int[] height) {
        int n=height.length;
        int l=0,r=n-1;
        int r_max=0,l_max=0,sum=0;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                l_max=Math.max(l_max,height[l]);
                sum+=l_max-height[l];
                l++;
            }
            else
            {
                r_max=Math.max(r_max,height[r]);
                sum+=r_max-height[r];
                r--;
            }
        }
        return sum;
    }
}