class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long s=accumulate(nums.begin(),nums.end(),0ll);
        vector<long long> v;
        for(int i:nums)
        {
            string t=to_string(i);
            sort(t.rbegin(),t.rend());
            long long gain=stoll(t)-i;
            v.push_back(gain);
        }
        sort(v.rbegin(),v.rend());
        int i=0;
        int n=nums.size();
        k=min(k,n);
        while(k--)
        s+=v[i++];
        return s;
    }
};