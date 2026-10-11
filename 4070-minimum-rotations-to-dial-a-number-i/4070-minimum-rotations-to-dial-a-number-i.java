class Solution {
    public int minRotations(String s) {
        int sum=0;
        int curr=0;
        for(int i=0;i<10;i++)
        {
            int t=s.charAt(i)-'0';
            int d=Math.abs(t-curr);
            sum+=Math.min(d,10-d);
            curr=t;
        }
        return sum;
    }
}