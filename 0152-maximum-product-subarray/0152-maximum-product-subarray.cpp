class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int r=1,l=1,maxi=nums[0];
        for(int i=0;i<n;i++)
        {
            if(!l)l=1;
            if(!r)r=1;
            l*=nums[i];
            r*=nums[n-i-1];
            maxi=max({maxi,l,r});
        }
        return maxi;
    }
};