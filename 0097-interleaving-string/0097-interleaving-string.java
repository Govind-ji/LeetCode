class Solution {
    int rec(int i, int j, int k, String s1, String s2, String s3, int dp[][])
    {
        if(k == s3.length())
            return 1;
        if(dp[i][j] != 0)
            return dp[i][j] == -1 ? 0 : 1;
        boolean l = false, r = false;
        if(i < s1.length() && s1.charAt(i) == s3.charAt(k))
            l = rec(i + 1, j, k + 1, s1, s2, s3, dp) == 1;
        if(j < s2.length() && s2.charAt(j) == s3.charAt(k))
            r = rec(i, j + 1, k + 1, s1, s2, s3, dp) == 1;
        dp[i][j] = (r || l) ? 1 : -1;
        return r || l ? 1 : 0;
    }

    public boolean isInterleave(String s1, String s2, String s3) {
        int n1 = s1.length();
        int n2 = s2.length();
        int n3 = s3.length();

        if(n1 + n2 != n3)
            return false;

        int ar[][] = new int[n1 + 1][n2 + 1];

        return rec(0, 0, 0, s1, s2, s3, ar) == 1;
    }
}
