class Solution {
    public int maxDepth(String s) {
        int i=0,m=0;
        for(int j=0;j<s.length();j++)
        {
            if(s.charAt(j)=='(')
            i++;
            else if(s.charAt(j)==')')
            i--;
            m=m<i?i:m;
        }
        return m;
    }
}