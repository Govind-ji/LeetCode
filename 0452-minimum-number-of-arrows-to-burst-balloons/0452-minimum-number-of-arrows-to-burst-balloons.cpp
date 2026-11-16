class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const auto&a, const auto&b) {
            return a[1] < b[1];
        });
        int n=points.size();
        int end=points[0][1];
        int cnt=1;
        for(int i=1;i<n;i++)
        {
            if(points[i][0]>end)
            {end=points[i][1];
            cnt++;}
        }
        return cnt;
    }
};