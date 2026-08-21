class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String,ArrayList<String>> mp=new HashMap<>();
        for(String s:strs)
        {
            char c[]=s.toCharArray();
            Arrays.sort(c);
            String t=new String(c);
            mp.putIfAbsent(t,new ArrayList<String>());
            mp.get(t).add(s);
        }
        List<List<String>> ls=new ArrayList<>();
        for(Map.Entry<String,ArrayList<String>> i:mp.entrySet())
        {
            ls.add(i.getValue());
        }
        return ls;
    }
}