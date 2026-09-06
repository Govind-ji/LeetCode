class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int half = n / 2;
        int ans = 0;

        long long s = 0, r = 0;

        for (int j = 0; j < half; j++) {
            s += nums[j];
            r += nums[j + half];
        }

        for (int i = 0; i < n; i++) {
            if (r > s)
                ans++;

            s -= nums[i];
            s += nums[(i + half) % n];

            r -= nums[(i + half) % n];
            r += nums[(i + n) % n];
        }

        return ans;
    }
};