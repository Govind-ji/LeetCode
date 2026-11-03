class Solution {
    public int minMoves(int[] nums) {
     int n=nums.length;
     int maxi=0;
     for(int i:nums)maxi=Math.max(i,maxi);
     int s=0;
     for(int i:nums)
     s+=maxi-i;
     return s;   
    }
}