class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        int st=0;
        int en=0;
        unordered_map<char,int> mp;
        vector<int> v;
        for(int i=0;i<n;i++)
        mp[s[i]]=i;
        for(int i=0;i<n;i++)
        {
            en=max(en,mp[s[i]]);
            if(i==en)
            {
                v.push_back(en-st+1);
                st=i+1;
            }
        }
        return v;
    }
};