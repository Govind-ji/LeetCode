class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int> a,vector<int> b){return a[0]<b[0];});
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            if(v.back()[1]>=intervals[i][0])
            {
                v.back()[1]=max(v.back()[1],intervals[i][1]);
            }
            else
            v.push_back(intervals[i]);
        }
        return v;
    }
};