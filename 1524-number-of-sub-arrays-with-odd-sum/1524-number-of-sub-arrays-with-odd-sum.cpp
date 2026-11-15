class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long even=1,odd=0,ans=0,sum=0; //even 1 cause 0 is even
        
        int mod=1e9+7;
        for(int x:arr)
        {
            sum+=x;
            if(sum%2==1)
            {
                odd++;
                ans=(ans+even)%mod;
            }
            else
            {
                even++;
                ans=(ans+odd)%mod;
            }
        }
        return ans;
    }
};