class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i:nums)
        {
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        PriorityQueue<int []> pq=new PriorityQueue<>((a,b)->Integer.compare(a[1],b[1]));
        for(Map.Entry<Integer,Integer>i:mp.entrySet())
        {
            pq.add(new int[]{i.getKey(),i.getValue()});
            if(pq.size()>k)
            pq.poll();
        }
        int ar[]=new int[k];
        int i=0;
        while(pq.size()>=1)
        {
            ar[i]=pq.poll()[0];
            i++;
        }
        return ar;
    }
}