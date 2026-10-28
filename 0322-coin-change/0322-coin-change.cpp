class Solution {
public:
int coin(vector<int>& coins,int a,int s,int p,vector<vector<int>> &mp)
{
    if(a==s)return 0;
    if(s>a || p==coins.size())return INT_MAX;
    if(mp[s][p]!=-1)return mp[s][p];
    int ans=INT_MAX;
    int pick=coin(coins,a,s+coins[p],p,mp);
    int npick=coin(coins,a,s,1+p,mp);
    if(pick==INT_MAX)
        ans=min(ans,npick);
    else
        ans=min(ans,min(pick+1,npick));
    return mp[s][p]=ans;
}
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> mp(amount,vector<int>(coins.size(),-1));
        sort(coins.begin(),coins.end(),greater<int>());
        int r=coin(coins,amount,0,0,mp);
        return r==INT_MAX?-1:r;
    }
};