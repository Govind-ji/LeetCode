class Solution {
    public int maxProfit(int[] prices) {
        int mini=prices[0];
        int maxip=0;
        int n=prices.length;
        for(int i=0;i<n;i++)
        {
            mini=Math.min(prices[i],mini);
            maxip=Math.max(prices[i]-mini,maxip);
        }
        return maxip;
    }
}