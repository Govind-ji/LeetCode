class Solution {
public:
bool rec(int i,int j,int k,string &s1,string &s2,string &s3,vector<vector<int>> &dp)
{
    if(k==s3.size())return true;
    if(s1[i]!=s3[k] && s2[j]!=s3[k])return false;
    if(dp[i][j]!=-1)return dp[i][j];
    bool l=false,r=false;
    if(i<s1.size() && s1[i]==s3[k])
    l=rec(i+1,j,k+1,s1,s2,s3,dp);
    if(j<s2.size() && s2[j]==s3[k])
    r=rec(i,j+1,k+1,s1,s2,s3,dp);
    return dp[i][j]=r||l;
}

    bool isInterleave(string s1, string s2, string s3) {
        int n1=s1.size();
        int n2=s2.size();
        int n3=s3.size();
        if(n1+n2!=n3)
        return false;
        vector<vector<int>> dp(n3,vector<int>(n3,-1));
        return rec(0,0,0,s1,s2,s3,dp);
    }
};