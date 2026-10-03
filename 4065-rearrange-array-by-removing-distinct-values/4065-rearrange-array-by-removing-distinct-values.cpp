class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(int i:nums)
        mp[i]++;
        vector<int> v;

        while(mp.size()>0)
        {
            unordered_set<int> st;
            for(auto i:mp)
            {
                if(--mp[i.first]==0)st.insert(i.first);
                v.push_back(i.first);
            }
            for(int i:st)mp.erase(i);
        }
        return v;
    }
};