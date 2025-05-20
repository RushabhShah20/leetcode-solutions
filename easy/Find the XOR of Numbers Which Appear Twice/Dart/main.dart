// Problem: Find the XOR of Numbers Which Appear Twice
// Link to the problem: https://leetcode.com/problems/find-the-xor-of-numbers-which-appear-twice/
class Solution {
  int duplicateNumbersXOR(List<int> nums) {
    int ans = 0;
    Map<int, int> m = new Map();
    List<int> a = new List.empty(growable: true);
    for (int i = 0; i < nums.length; i++) {
      m[nums[i]] = (m[nums[i]] ?? 0) + 1;
    }
    for (var i in m.entries) {
      if (i.value == 2) {
        a.add(i.key);
      }
    }
    for (int i = 0; i < a.length; i++) {
      ans ^= a[i];
    }
    return ans;
  }
}
