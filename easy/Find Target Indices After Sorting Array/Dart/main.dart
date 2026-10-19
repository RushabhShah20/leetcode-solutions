// Problem: Find Target Indices After Sorting Array
// Link to the problem: https://leetcode.com/problems/find-target-indices-after-sorting-array/
class Solution {
  List<int> targetIndices(List<int> nums, int target) {
    final int n = nums.length;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
      if (nums[i] < target) {
        x++;
      } else if (nums[i] == target) {
        y++;
      }
    }
    List<int> ans = new List.empty(growable: true);
    for (int i = x; i < x + y; i++) {
      ans.add(i);
    }
    return ans;
  }
}
