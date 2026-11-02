class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int t=0,maxi=0;
        for(int i:nums)
        {
            if(i==0)
            {
                maxi=max(t,maxi);
                t=0;
                continue;
            }
            t++;
        }
        return maxi>t?maxi:t;
    }
};