class Solution {
    public int generateKey(int num1, int num2, int num3) {
        String t1=""+num1;
        String t2=""+num2;
        String t3=""+num3;
        while(t1.length()<4)
            t1="0"+t1;
        while(t2.length()<4)
            {t2="0"+t2;}
        while(t3.length()<4)
            t3="0"+t3;
        int r=0;
        for(int i=0;i<4;i++)
        {
            int t=Math.min((t1.charAt(i)-'0'),(t2.charAt(i)-'0'));
            t=Math.min(t,(t3.charAt(i)-'0'));
            r=(r*10)+t;
        }
        return r;
    }
}