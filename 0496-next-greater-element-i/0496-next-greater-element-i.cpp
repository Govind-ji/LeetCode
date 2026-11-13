class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;
        int n=nums2.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && nums2[st.top()]<nums2[i])st.pop();
            if(st.empty())
            mp[nums2[i]]=-1;
            else 
            mp[nums2[i]]=nums2[st.top()];
            st.push(i);
        }
        for(int &i:nums1)
        i=mp[i];
        return nums1;
    }
};