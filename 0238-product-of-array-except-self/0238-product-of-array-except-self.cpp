class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
long long t=1;
int g=0;
for(int i:nums)
{t*=i==0?1:i;
g+=i==0?1:0;
}
if(g>1)                // more than 1 zeros wala case
{
    vector<int> v(nums.size(),0);
    return v;
}
for(int i=0;i<nums.size();i++)
{
    if(g==1)
    nums[i]=nums[i]==0?t:0;
    else
nums[i]=nums[i]==0?t:t/nums[i];
}
return nums;
}
};