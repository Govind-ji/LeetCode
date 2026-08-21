class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        k=nums.size()-k;
        vector<int>g(nums.begin(),nums.begin()+k);
        nums.erase(nums.begin(),nums.begin()+k);
        for(int i:g)
        nums.push_back(i);

    }
};