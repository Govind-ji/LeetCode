class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> hs=new HashSet<>();
        int n=s.length();
        int l=0,r=0;
        int maxi=0;
        while(r<n)
        {
            while(r<n && !hs.contains(s.charAt(r)))
            {
                hs.add(s.charAt(r));
                r++;
            }
            maxi=Math.max(maxi,r-l);
            while(r<n && l<r && hs.contains(s.charAt(r)))
            {
                hs.remove(s.charAt(l));
                l++;
            }
        }
        return maxi;
    }
}