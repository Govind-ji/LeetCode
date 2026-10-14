class Solution {
    public String maxSumOfSquares(int num, int sum) {
        int sm=0;
        StringBuilder sb=new StringBuilder();
        int dig=9;
        while(num!=0)
        {
            if(dig+sm<=sum)
            {
                sb.append(dig);
                sm+=dig;
                num--;
            }
            else
            {
                dig=sum-sm;
            }
        }
        return sm==sum?sb.toString():"";
    }
}