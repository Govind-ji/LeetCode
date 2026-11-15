class Solution {
public:
int dphelp(string& s1,string& s2,int i,int j,vector<vector<int>>&dp)
{
    if(i==s1.size())return s2.size()-j;
    if(j==s2.size())return s1.size()-i;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s1[i]==s2[j])
    return dp[i][j]=dphelp(s1,s2,i+1,j+1,dp);
    int ins=1+dphelp(s1,s2,i,j+1,dp);
    int rep=1+dphelp(s1,s2,i+1,j+1,dp);
    int del=1+dphelp(s1,s2,i+1,j,dp);
    return dp[i][j]=min(ins,min(rep,del));
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return dphelp(word1,word2,0,0,dp);
    }
};