class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length;
        HashSet<Integer> hs=new HashSet<>();
        for(int i=0;i<n;i++)
        {
            hs.add(nums[i]);
        }
        int maxi=0;
        for(int s:hs)
        {
            if(!hs.contains(s+1))
            {int cnt=1;
            while(hs.contains(--s))
            {
                cnt++;
            }
            maxi=Math.max(maxi,cnt);
            }
        }
        return maxi;
    }
}