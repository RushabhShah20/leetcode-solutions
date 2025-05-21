// Problem: Single Number II
// Link to the problem: https://leetcode.com/problems/single-number-ii/
class Solution {
  int singleNumber(List<int> nums) {
    int ans = 0;
    Map<int, int> m = new Map<int, int>();
    for (int i = 0; i < nums.length; i++) {
      m[nums[i]] = (m[nums[i]] ?? 0) + 1;
    }
    for (var i in m.entries) {
      if (i.value == 1) {
        ans = i.key;
        break;
      }
    }
    return ans;
  }
}
