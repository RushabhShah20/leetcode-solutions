// Problem: Adjacent Increasing Subarrays Detection I
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
class Solution {
  bool isStrictlyIncreasing(List<int> nums, int start, int k) {
    for (int i = start; i < start + k - 1; i++) {
      if (nums[i] >= nums[i + 1]) {
        return false;
      }
    }
    return true;
  }

  bool hasIncreasingSubarrays(List<int> nums, int k) {
    int n = nums.length;
    if (n < 2 * k) {
      return false;
    }
    for (int i = 0; i <= n - 2 * k; i++) {
      if (isStrictlyIncreasing(nums, i, k) &&
          isStrictlyIncreasing(nums, i + k, k)) {
        return true;
      }
    }
    return false;
  }
}
