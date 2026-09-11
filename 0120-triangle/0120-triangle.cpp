class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int> v=triangle[n-1];
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<=i;j++)
            {
                v[j]=min(v[j],v[j+1])+triangle[i][j];
            }
        }
        return v[0];

    }
};