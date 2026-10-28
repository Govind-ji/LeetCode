class Solution {
public:
int coin(vector<int>& coins,int a,int s,int p,map<pair<int,int>,int>& mp)
{
    if(a==s)return 0;
    if(s>a || p==coins.size())return INT_MAX;
    if(mp.count({s,p}))return mp[{s,p}];
    int ans=INT_MAX;
    int pick=coin(coins,a,s+coins[p],p,mp);
    int npick=coin(coins,a,s,1+p,mp);
    if(pick==INT_MAX)
        ans=min(ans,npick);
    else
        ans=min(ans,min(pick+1,npick));
    return mp[{s,p}]=ans;
}
    int coinChange(vector<int>& coins, int amount) {
        map<pair<int,int>,int> mp;
        sort(coins.begin(),coins.end(),greater<int>());
        int r=coin(coins,amount,0,0,mp);
        return r==INT_MAX?-1:r;
    }
};