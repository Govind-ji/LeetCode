class Solution {
public:
vector<int> p;
int t=1;
    Solution(vector<int>& nums) {
        p=nums;
    }
    
    vector<int> reset() {
        return p;
    }
    
    vector<int> shuffle() {
        vector<int> v;
        v=p;
        sort(v.begin(),v.end());
        for(int i=0;i<t;i++)
        {
            if(!next_permutation(v.begin(),v.end()))
            sort(v.begin(),v.end());
        }
        t++;
        return v;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */