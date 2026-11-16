class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        vector<vector<int>> ans;
        ans.push_back(points[0]);
        int n=points.size();
        for(int i=1;i<n;i++)
        {
            if(ans.back()[1]>=points[i][0])
            {
                ans.back()[1]=max(points[i][1],ans.back()[1]);
            }
            else
            ans.push_back(points[i]);
        }
        return ans;
    }
};