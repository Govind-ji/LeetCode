class Solution {
    public int reverseDegree(String s) {
        int su=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            su+=(26-(s.charAt(i)-'a'))*(i+1);
        }
        return su;
    }
}