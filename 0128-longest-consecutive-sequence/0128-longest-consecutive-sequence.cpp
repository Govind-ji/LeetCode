class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        if(nums.size()==0)return 0;
        int prev=nums[0];
        int m=0;
        int s=0;
        for(int i:st)
        {
            if(i!=prev+1)
            {
                m=max(m,s);
                s=0;
            }
            s++;
            prev=i;
        }
        m=max(m,s);
        return m;
    }
};