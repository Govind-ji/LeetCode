class Solution {
    boolean chk(String t,int i,int j)
    {
        if(i>=j)return true;
        if(t.charAt(i)==t.charAt(j))return chk(t,i+1,j-1);
        return false;
    }
    public String longestPalindrome(String s) {
        int t=0,p=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(chk(s,i,j))
                {
                    if(t<j-i+1)
                    {
                        t=j-i+1;
                        p=i;
                    }
                }
            }
        }
        return s.substring(p,p+t);
    }
}