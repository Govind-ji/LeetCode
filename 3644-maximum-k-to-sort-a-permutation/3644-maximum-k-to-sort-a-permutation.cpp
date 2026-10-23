class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int i=0;
        int t=0;
        for(int p:nums)
        {
            if(p!=i)
            {
                t=p;
                break;
            }
            i++;
        }
        i=0;
        for(int p:nums){
            if(p!=i)
            t&=p;
            i++;
        }
        return t;
    }
};