// Problem: Find All Duplicates in an Array
// Link to the problem: https://leetcode.com/problems/find-all-duplicates-in-an-array/
class Solution {
  List<int> findDuplicates(List<int> nums) {
    List<int> ans = new List.empty(growable: true);
    Map<int, int> m = new Map<int, int>();
    for (int i = 0; i < nums.length; i++) {
      m[nums[i]] = (m[nums[i]] ?? 0) + 1;
    }
    for (var i in m.entries) {
      if (i.value == 2) {
        ans.add(i.key);
      }
    }
    return ans;
  }
}
