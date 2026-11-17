class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int t[1001];
        for(vector<int> v:trips)
        {
            t[v[1]]+=v[0];
            t[v[2]]-=v[0];
        }
        if(t[0]>capacity)return false;
        for(int i=1;i<1001;i++)
        {
            t[i]+=t[i-1];
            if(t[i]>capacity)return false;
        }
        return true;
    }
};