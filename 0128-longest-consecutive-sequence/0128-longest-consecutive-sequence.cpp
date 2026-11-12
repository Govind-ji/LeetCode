class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return n;
        set<int> st(nums.begin(),nums.end());
        int l=0;
        int s=0;
        int maxi=0;
        for(int i:st)
        {
            if(l+1!=i)
            {
                maxi=max(maxi,s);
                s=0;
            }
            s++;
            l=i;
        }
        return maxi>s?maxi:s;
    }
};