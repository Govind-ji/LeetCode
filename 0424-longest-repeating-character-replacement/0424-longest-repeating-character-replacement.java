class Solution {
    public int characterReplacement(String s, int k) {
        int maxif=0;
        int freq[]=new int[26];
        int maxil=0;
        int l=0;
        int n=s.length();
        for(int r=0;r<n;r++)
        {
            int x=s.charAt(r)-'A';
            freq[x]++;
            maxif=Math.max(maxif,freq[x]);
            while((r-l+1)-maxif>k)
            {
                freq[s.charAt(l)-'A']--;
                l++;
            }
            maxil=Math.max(maxil,(r-l+1));
        }
        return maxil;
    }
}