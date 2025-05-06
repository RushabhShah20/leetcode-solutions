// Problem: Make Array Non-decreasing
// Link to the problem: https://leetcode.com/problems/make-array-non-decreasing/
class Solution {
  int maximumPossibleSize(List<int> nums) {
    int ans = 0;
    int max = -0x8000000000000000;
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] >= max) {
        max = nums[i];
        ans++;
      }
    }
    return ans;
  }
}
