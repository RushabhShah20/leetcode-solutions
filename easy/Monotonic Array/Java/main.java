// Problem: Monotonic Array
// Link to the problem: https://leetcode.com/problems/monotonic-array/
class Solution {
    public boolean isMonotonic(int[] nums) {
        int len = nums.length;
        if (nums[len - 1] >= nums[0]) {
            for (int i = 1; i < len; i++) {
                if (nums[i] < nums[i - 1])
                    return false;
            }
        } else {
            for (int i = 0; i < len - 1; i++) {
                if (nums[i] < nums[i + 1])
                    return false;
            }
        }
        return true;
    }
}