class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int s=0;
        for(int i=1;i<=n*n;i++)s+=i;
        int a=0,b=0;
        unordered_set<int> st;
        for(vector<int> v:grid)
        {
            for(int i:v)
            {
                int r=st.size();
                st.insert(i);
                if(r==st.size())
                a=i;
                else
                s-=i;
            }
        }
        return {a,s};
    }
};