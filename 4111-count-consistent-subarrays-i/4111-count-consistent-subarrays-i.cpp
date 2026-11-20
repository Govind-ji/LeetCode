class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n=nums.size();
        int t=0;
        for(int i=0;i<n;i++)
        {
            int bit=nums[i];
            int mini=nums[i];
            for(int j=i;j<n;j++)
            {
                bit&=nums[j];
                mini=min(mini,nums[j]);
                if(bit==mini)
                t++;
            }
        }
        return t;
    }
};