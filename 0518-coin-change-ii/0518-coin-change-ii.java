class Solution {
int count(int a,int[] coins ,int p,int[][] mp,int n)
{
    if(a<0 || p>=n)return 0;
    if(a==0)return 1;
    if(mp[a][p]!=-1)return mp[a][p];
    int pick=count(a-coins[p],coins,p,mp,n);
    int unpick=count(a,coins,p+1,mp,n);
    return mp[a][p]=pick+unpick;
}
    public int change(int amount, int[] coins) {
        int n=coins.length;
        int ar[][]=new int[amount+1][n];
        for (int[] row : ar) Arrays.fill(row, -1);

        return count(amount,coins,0,ar,n);
    }
}