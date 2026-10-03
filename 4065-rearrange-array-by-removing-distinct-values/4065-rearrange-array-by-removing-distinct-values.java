class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n=nums.length;
        TreeMap<Integer,Integer> hs=new TreeMap<>();
        for(int i:nums)
        {
            hs.put(i,hs.getOrDefault(i,0)+1);
        }
        int ar[]=new int[n];
        int f=0;
        while(hs.size()>0)
        {
            HashSet<Integer> s=new HashSet<>();
            for(Map.Entry<Integer,Integer> i:hs.entrySet())
            {
                int t=i.getKey();
                ar[f++]=t;
                hs.put(t,hs.get(t)-1);
                if(hs.get(t)==0)
                s.add(t);            
            }
            for(int i:s)
            {
                hs.remove(i);
            }
        }
        return ar;

    }
}