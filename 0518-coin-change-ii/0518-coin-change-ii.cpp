class Solution {
public:
int n;
int count(int a,vector<int>& coins,int p,int mp[][300])
{
    if(a<0 || p>=coins.size())return 0;
    if(a==0)return 1;
    if(mp[a][p]!=-1)return mp[a][p];
    int pick=count(a-coins[p],coins,p,mp);
    int unpick=count(a,coins,p+1,mp);
    return mp[a][p]=pick+unpick;
}
    int change(int amount, vector<int>& coins) {
        n=coins.size();
        int ar[10000][300];
        memset(ar,-1,sizeof(ar));
        return count(amount,coins,0,ar);

    }
};