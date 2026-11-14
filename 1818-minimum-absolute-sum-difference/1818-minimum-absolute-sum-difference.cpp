class Solution {
public:
const long long mod=1e9+7;
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v=nums1;
        int n=nums1.size();
        sort(v.begin(),v.end());
        long long s=0ll;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            int diff=abs(nums1[i]-nums2[i]);
            s=(s+diff)%mod;
            int l=lower_bound(v.begin(),v.end(),nums2[i])-v.begin(); 
            if(l<n)
            maxi=max(maxi,diff-abs(nums2[i]-v[l]));
            if(l>0)
            maxi=max(maxi,diff-abs(nums2[i]-v[l-1]));
        }
        return (s-maxi+mod)%mod;
    }
};