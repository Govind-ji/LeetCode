class Solution {
    public int minInsertions(String s) {
        int l=s.length();
        int sum=0;
        int req=0;
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c=='(')
            {
                if(sum%2==1)
                {
                    sum--;
                    req++;
                }
                sum+=2;
            }
            else
            {
                if(sum>0)
                sum--;
                else
                {
                    req++;
                    sum++;
                }
            }
        }
        return req+sum;
    }
}