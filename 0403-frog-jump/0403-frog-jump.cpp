class Solution {
public:

bool dphelp(vector<int>& stones,int curr,int prev,vector<vector<int>>& dp,unordered_map<int,int>&mp)
{
    if(curr==stones.size()-1)return true;
    bool ans=false;
    if(dp[curr][prev]!=-1)return dp[curr][prev];
    for(int t=prev-1;t<=prev+1;t++)
    {
        if(t>0 && mp.count(stones[curr]+t))
        ans=ans||dphelp(stones,mp[stones[curr]+t],t,dp,mp);
    }
    return dp[curr][prev]=ans;
}
    bool canCross(vector<int>& stones) {
        vector<vector<int>> dp(2001,vector<int>(2001,-1));
        int n=stones.size();
        if(stones[1]!=1)return false;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[stones[i]]=i;
        return dphelp(stones,0,0,dp,mp);
        
    }
};