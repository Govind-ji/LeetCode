class Solution {
public:
const long mod=1e9+7;
int reversen(int num)
{
    string r=to_string(num);
    reverse(r.begin(),r.end());
    int p=0;
    for(char c:r)
    {
        p=(p*10)+(c-'0');
    }
    return p;
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