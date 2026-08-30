class Solution {
    public int countSpecialIntegers(int[] nums) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int cnt=0;
        int prev=nums[0],s=0;
        for(int i:nums)
        mp.put(i,mp.getOrDefault(i,0)+1);
        for(int i:nums)
        {
            if(i!=prev)
            {
                s+=mp.get(prev)==cnt?1:0;
                prev=i;
                cnt=1;
            }
            else
            cnt++;
        }
        return cnt==mp.get(prev)?s+1:s;
    }
}