// Problem: Count Subarrays With Majority Element I
// Link to the problem: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
class Solution {
    public int countMajoritySubarrays(int[] nums, int target) {
        int ans = 0, n = nums.length;
        for (int k = 1; k <= n; k++) {
            int count = 0;
            for (int i = 0; i < n; i++) {
                if (i >= k) {
                    if (nums[i] == target) {
                        count++;
                    }
                    if (nums[i - k] == target) {
                        count--;
                    }
                } else {
                    if (nums[i] == target) {
                        count++;
                    }
                }
                if (i >= k - 1) {
                    if (2 * count > k) {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
}