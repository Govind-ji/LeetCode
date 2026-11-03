class Solution {
public:
int lcs(string &s1,string &s2,vector<vector<int>>& v,int i,int j)
{
    if(i>=s1.size() || j>=s2.size())return 0;
    if(v[i][j]!=-1)return v[i][j];
    int maxi=0;
    if(s1[i]==s2[j])
    return v[i][j]=maxi=1+lcs(s1,s2,v,i+1,j+1);
    else
    {
        return v[i][j]=max(lcs(s1,s2,v,i+1,j),lcs(s1,s2,v,i,j+1));
    }
}
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> v(text1.size(),vector<int>(text2.size(),-1));
        return lcs(text1,text2,v,0,0);
    }
};