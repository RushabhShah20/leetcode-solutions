// Problem: Find the Duplicate Number
// Link to the problem: https://leetcode.com/problems/find-the-duplicate-number/
class Solution {
  int findDuplicate(List<int> nums) {
    int ans = 0;
    Map<int, int> m = new Map();
    for (int i = 0; i < nums.length; i++) {
      m[nums[i]] = (m[nums[i]] ?? 0) + 1;
      if ((m[nums[i]] ?? 0) >= 2) {
        ans = nums[i];
        break;
      }
    }
    return ans;
  }
}
