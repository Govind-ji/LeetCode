class Solution {
    public boolean checkInclusion(String s1, String s2) {
        TreeMap<Integer,Integer> mp=new TreeMap<>();
        TreeMap<Integer,Integer> mp1=new TreeMap<>();
        int l1=s1.length();
        int l2=s2.length();
        if(l1>l2)return false;
        for(int i=0;i<l1;i++)
        {
            int t1=s1.charAt(i)-'A';
            int t2=s2.charAt(i)-'A';
            mp.put(t1,mp.getOrDefault(t1,0)+1);
            mp1.put(t2,mp1.getOrDefault(t2,0)+1);
        }
        if(mp.equals(mp1))return true;
        for(int i=l1;i<l2;i++)
        {
            int r=s2.charAt(i)-'A';
            int q=s2.charAt(i-l1)-'A';
            mp1.put(q,mp1.get(q)-1);
            if(mp1.get(q)==0)
            mp1.remove(s2.charAt(i-l1)-'A');
            mp1.put(r,mp1.getOrDefault(r,0)+1);
            if(mp.equals(mp1))
            return true;
        }
        return false;
    }
}