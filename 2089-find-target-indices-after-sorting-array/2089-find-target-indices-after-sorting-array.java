class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int n=nums.length;
        int mini=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<target)
            mini++;
            if(nums[i]==target)
            r++;
        }
        List<Integer> lst=new ArrayList<>();
        if(0==r)return lst;
        for(int i=0;i<r;i++)
        {
            lst.add(mini);
            mini++;
        }
        return lst;        
    }
}