class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        vector<int> v;
        vector<pair<int,int>> v1;
        for(auto i:mp)
        { 
            v1.push_back({i.second,i.first});
        }
        sort(v1.rbegin(),v1.rend());
        for(int i=0;i<v1.size();i++)
        cout<<v1[i].first<<" "<<v1[i].second<<endl;
        for(int i=0;i<k;i++)
        {
            v.push_back(v1[0].second);
            v1.erase(v1.begin());
        }
        return v;
    }
};