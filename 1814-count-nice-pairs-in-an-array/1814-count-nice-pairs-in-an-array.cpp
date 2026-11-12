class Solution {
public:
const long mod=1e9+7;
int reversen(int num)
{
    int ans=0;
    while(num)
    {
        ans=(ans*10)+num%10;
        num/=10;
    }
    return ans;
}
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int t=0;
        for(int i:nums)
        {
            int y=i-reversen(i);
            if(mp[y]>0)t=(t+mp[y])%mod;
            mp[y]++;
        }
        return t;
    }
};