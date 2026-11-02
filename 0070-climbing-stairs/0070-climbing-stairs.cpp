class Solution {
public:
int dp(int n,int i,vector<int>& v)
{
    if(i>n)return 0;
    if(i==n)return 1;
    if(v[i]!=-1)return v[i];
    int one=dp(n,i+1,v);
    int two=dp(n,i+2,v);
    return v[i]=one+two;
}
    int climbStairs(int n) {
        vector<int> v(n+1,-1);
        return dp(n,0,v);
    }
};