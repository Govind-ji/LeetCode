class Solution {
    public boolean isPalindrome(String s) {
        String st="";
        s=s.toLowerCase();
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(Character.isLetterOrDigit(s.charAt(i)))
            st+=s.charAt(i);
        }
        l=st.length();
        for(int i=0;i<l/2;i++)
        {
            if(st.charAt(i)!=st.charAt(l-i-1))
            return false;
        }
        return true;
    }
}