class Solution {    //not m but know
    public int minimumDeletions(int[] nums) {
        int n = nums.length;

        int mini = 0;
        int maxi = 0;

        // Find indices of minimum and maximum
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[mini]) {
                mini = i;
            }

            if (nums[i] > nums[maxi]) {
                maxi = i;
            }
        }

        // Make mini the smaller index and maxi the larger index
        if (mini > maxi) {
            int temp = mini;
            mini = maxi;
            maxi = temp;
        }

        // 1. Remove both from the left
        int left = maxi + 1;

        // 2. Remove both from the right
        int right = n - mini;

        // 3. Remove one from left and one from right
        int both = (mini + 1) + (n - maxi);

        return Math.min(left, Math.min(right, both));
    }
}