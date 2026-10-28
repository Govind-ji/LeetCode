class Solution {
public:   
int coin(vector<int>& coins,int a,int s,vector<int>& mp)
{
    if(a==s)return 0;
    if(mp[s]!=-1)return mp[s];
    int ans=INT_MAX;
    for(int i=0;i<coins.size();i++)
    {
        if(coins[i]>a-s)continue;
        int pick=coin(coins,a,s+coins[i],mp);
        if(pick!=INT_MAX)ans=min(ans,pick+1);
    }
    return mp[s]=ans;
}
    int coinChange(vector<int>& coins, int amount) {
        vector<int> mp(amount+1,-1);
        int r=coin(coins,amount,0,mp);
        return r==INT_MAX?-1:r;
    }
};
