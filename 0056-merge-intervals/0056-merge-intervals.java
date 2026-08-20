class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        int n=intervals.length;
        ArrayList<int []> ar=new ArrayList<>();
        int first=intervals[0][0];
        int last=intervals[0][1];
        for(int a[]:intervals)
        {
            if(a[0]<=last)
            {
                last=Math.max(last,a[1]);
            }
            else
            {
                ar.add(new int[]{first,last});
                last=a[1];
                first=a[0];
            }
        }
        ar.add(new int[]{first,last});
        return ar.toArray(new int[ar.size()][]);        
    }
}