// Problem: Single Element in a Sorted Array
// Link to the problem: https://leetcode.com/problems/single-element-in-a-sorted-array/
class Solution {
  int singleNonDuplicate(List<int> nums) {
    int ans = 0;
    Map m = new Map();
    for (int i = 0; i < nums.length; i++) {
      m[nums[i]] = (m[nums[i]] ?? 0) + 1;
    }
    for (var i in m.entries) {
      if (i.value == 1) {
        ans = i.key;
      }
    }
    return ans;
  }
}
