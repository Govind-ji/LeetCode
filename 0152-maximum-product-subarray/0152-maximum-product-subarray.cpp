class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int maxi=nums[0];
        int r=0;
        for(int i=0;i<n;i++)
        {
            if(l==0)l=1;
            if(r==0)r=1;
            l*=nums[i];
            r*=nums[n-i-1];
            maxi=max(r,max(l,maxi));
        }
        return maxi;
    }
};