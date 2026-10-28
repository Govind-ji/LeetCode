class Solution {
public:

bool dphelp(vector<int>& stones,int curr,int prev,int dp[][2001],unordered_map<int,int>&mp)
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
        int dp[2001][2001];
        memset(dp,-1,sizeof(dp));
        int n=stones.size();
        if(stones[1]!=1)return false;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[stones[i]]=i;
        return dphelp(stones,0,0,dp,mp);
        
    }
};