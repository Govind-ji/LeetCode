class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int> mp;
        int t=score.size();
        for(int i=0;i<t;i++)mp[score[i]]=i;
        vector<string> st(t);
        for(auto i:mp)
        {
            int r=i.second;
            if(t==1)
            st[r]="Gold Medal";
            else if(t==2)
            st[r]="Silver Medal";
            else if(t==3)
            st[r]="Bronze Medal";
            else
            st[r]=to_string(t);
            t--;
        }
        return st;
    }
};