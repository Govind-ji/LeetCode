class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int left_max = 0, right_max = 0;
        int count = 0;

        while (l < r) {
            if (height[l] < height[r]) {
                if (height[l] >= left_max) {
                    left_max = height[l];
                } else {
                    count += left_max - height[l];
                }
                l++;
            } else {
                if (height[r] >= right_max) {
                    right_max = height[r];
                } else {
                    count += right_max - height[r];
                }
                r--;
            }
        }

        return count;
    }
};
