class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](vector<int> a,vector<int> b){return a[0]<b[0];});
        int last=intervals[0][1];
        int b=intervals[0][0];
        vector<vector<int>> v;
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>last)
            {
                v.push_back({b,last});
                last=intervals[i][1];
                b=intervals[i][0];
            }
            else
            {
                last=max(last,intervals[i][1]);
            }
        }
        v.push_back({b,last});
        return v;
    }
};