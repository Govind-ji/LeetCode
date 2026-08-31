class Solution {
public:
    int moves(int l,int r,string &s,vector<vector<int>> &dp)
    {
        if(l>=r)return 0;
        if(dp[l][r]!=-1)
        return dp[l][r];
        if(s[l]!=s[r])
        {
            return dp[l][r]=1+min(moves(l+1,r,s,dp),moves(l,r-1,s,dp));
        }
        else return dp[l][r]=(moves(l+1,r-1,s,dp));
    }
    int minInsertions(string s) {
        int n=s.size();
        int l=0,r=n-1;
        vector<vector<int>> dp(n,vector<int> (n,-1));
        int cnt=moves(l,r,s,dp);
        return cnt;
    }
};