class Solution {
    public List<String> topKFrequent(String[] words, int k) {
        Map<String,Integer> mp=new HashMap<>();
        for(String t:words)
        {
            mp.put(t,mp.getOrDefault(t,0)+1);
        }
        PriorityQueue<String> pq=new PriorityQueue<>(
            (a,b)->{
                if(!mp.get(a).equals(mp.get(b)))
                return mp.get(a)-mp.get(b);
                return b.compareTo(a);
            }
        );
        for(Map.Entry<String,Integer> en:mp.entrySet())
        {
            pq.offer(en.getKey());
            if(pq.size()>k)
            pq.poll();
        }
        List<String> ls=new ArrayList<>();
        while(!pq.isEmpty())
        {
            ls.add(pq.poll());
        }
        Collections.reverse(ls);
        return ls;
    }
}