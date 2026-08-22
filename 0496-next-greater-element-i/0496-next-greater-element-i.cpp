class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++)
        {
            int pos=find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            while(pos<nums2.size())
            {
                if(nums2[pos]>nums1[i])
                {
                v[i]=nums2[pos];
                break;}
                pos++;
            }
            cout<<endl;
        }
        return v;
    }
};