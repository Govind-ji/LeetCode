class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n=stones.size();
        int maxi=0;
        if(n<=2)return stones[1]-stones[0];
        for(int i=2;i<n;i++)
        {
            maxi=max(stones[i]-stones[i-2],maxi);
        }
        return maxi;
    }
};