class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int lo, int ro) {
        int mini=INT_MAX;
        int l=0,r=0;
        int s=0;
        int n=nums.size();

        while(r<n)
        {
            s+=nums[r];
            r++;

            while(r-l>ro)
            {
                s-=nums[l];
                l++;
            }

            if(r-l>=lo && s>0)
            mini=min(mini,s);

            int temp=l;
            int sum=s;

            while(r-temp>lo)
            {
                sum-=nums[temp];
                temp++;

                if(sum>0)
                mini=min(mini,sum);
            }
        }

        return mini==INT_MAX?-1:mini;
    }
};