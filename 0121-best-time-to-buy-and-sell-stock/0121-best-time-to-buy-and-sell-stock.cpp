class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int mini=prices[0];
        // int maxi=0;
        // for(int i:prices)
        // {
        //     maxi=max(i-mini,maxi);
        //     mini=min(mini,i);
        // }
        // return maxi;

        //kadane
        int n=prices.size();
        vector<int> diff(n-1);
        for(int i=1;i<n;i++)diff[i-1]=prices[i]-prices[i-1];
        int maxi=0,s=0;
        for(int i:diff)
        {
            s+=i;
            if(s<0)s=0;
            maxi=max(maxi,s);
        }
        return maxi;
    }
};