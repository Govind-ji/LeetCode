class Solution {
public:
int dphelp(string& s1,string& s2,int i,int j,vector<vector<int>>&dp)
{
    if(i==s1.size()||j==s2.size())
    {
        return 0;
    }
    if(s1[i]==s2[j])return 1+dphelp(s1,s2,i+1,j+1,dp);
    if(dp[i][j]!=-1)return dp[i][j];
    int l=dphelp(s1,s2,i+1,j,dp);
    int r=dphelp(s1,s2,i,j+1,dp);
    return dp[i][j]=max(l,r);
}
    int minDistance(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        int st=0;
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        int p=dphelp(word1,word2,0,0,dp);
        return n1-p+n2-p;
    }
};