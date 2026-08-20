class Solution {
    public boolean isAnagram(String s, String t) {
        int  ch[]=new int[26];
        int l1=s.length();
        int l2=t.length();
        if(l1!=l2)return false;
        for(int i=0;i<l1;i++)
        {
            ch[s.charAt(i)-'a']++;
        }
        for(int i=0;i<l2;i++)
        {
            ch[t.charAt(i)-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(ch[i]!=0)
            return false;
        }
        return true;
    }
}