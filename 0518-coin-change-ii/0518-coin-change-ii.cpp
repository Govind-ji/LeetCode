class Solution {
public:
int count(int a,vector<int>& coins,int p,int mp[][300],int& n)
{
    if(a<0 || p>=n)return 0;
    if(a==0)return 1;
    if(mp[a][p]!=-1)return mp[a][p];
    int pick=count(a-coins[p],coins,p,mp,n);
    int unpick=count(a,coins,p+1,mp,n);
    return mp[a][p]=pick+unpick;
}
    int change(int amount, vector<int>& coins) {
        int ar[10000][300];
        int n=coins.size();
        memset(ar,-1,sizeof(ar));
        return count(amount,coins,0,ar,n);

    }
};