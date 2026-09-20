class Solution {
    public int countIntersectingIntervals(int[][] intervals) {
        int n=intervals.length;
        int t=0;
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=intervals[i][1])t++;
            }
        }
        return t;
    }
}