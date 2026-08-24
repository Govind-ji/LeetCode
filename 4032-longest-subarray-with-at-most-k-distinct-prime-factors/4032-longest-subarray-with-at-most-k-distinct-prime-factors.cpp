class Solution {
public:
vector<int> sieve(int n)
{
    vector<int> v(n+1,0);
    v[1]=1;
    for(int i=2;i*i<=n;i++)
    {
        int p=i*i;
        while(p<=n)
        {
            if(v[p]==0)
            {
                v[p]=i;
            }
            p+=i;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(v[i]==0)v[i]=i;
    }
    return v;
}
void spf(vector<unordered_set<int>> &vec,vector<int> &v,int nums)
{
    unordered_set<int> t;
    while(nums!=1)
    {
        t.insert(v[nums]);
        nums=nums/v[nums];
    }
    vec.push_back(t);
}
    int longestSubarray(vector<int>& nums, int k) {
        int maxi=*max_element(nums.begin(),nums.end());
        vector<int> sv=sieve(maxi);
        int ans=0;
        vector<unordered_set<int>> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        spf(v,sv,nums[i]);
        int l=0,r=0;
        int dst=0;
        vector<int> freq(maxi+1,0);
        while(r<n)
        {
            while(r<n && dst<=k)
            {
                for(int i:v[r])
                {
                    if(freq[i]==0)
                    dst++;
                    freq[i]++;
                }
                r++;
                if(dst<=k)
                   ans=max(ans,r-l);
            }
            while(dst>k)
            {
                for(int i:v[l])
                {
                    freq[i]--;
                    if(freq[i]==0)
                    dst--;
                }
                l++;
            }
            ans=max(ans,r-l);
        }
        return ans;
    }
};