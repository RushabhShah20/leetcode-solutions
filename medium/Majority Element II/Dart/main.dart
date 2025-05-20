// Problem: Majority Element II
// Link to the problem: https://leetcode.com/problems/majority-element-ii/
class Solution {
  List<int> majorityElement(List<int> nums) {
    Map<int, int> m = new Map();
    List<int> ans = new List.empty(growable: true);
    for (int i = 0; i < nums.length; i++) {
      m[nums[i]] = (m[nums[i]] ?? 0) + 1;
    }
    for (var i in m.entries) {
      if (i.value * 3 > nums.length) {
        ans.add(i.key);
      }
    }
    return ans;
  }
}
