class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int n=s.size();
        int maxi=0;
        unordered_set<int> st;
        while(r<n)
        {
            while(st.count(s[r]))
            {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};