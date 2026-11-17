class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        set<int> st(nums.begin(),nums.end());
        int t=0;
        t=*st.begin();
        int s=1,maxi=0;
        st.erase(t);
        for(int i:st)
        {
            int r=*st.begin();      
            if(t+1!=r)
            {
                maxi=max(maxi,s);
                s=1;
            }
            else s++;      
            st.erase(r);
            t=r;
        }
        return maxi>s?maxi:s;
    }
};