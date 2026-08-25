// Problem: Smallest Missing Multiple of K
// Link to the problem: https://leetcode.com/problems/smallest-missing-multiple-of-k/
import 'dart:collection';

class Solution {
  int missingMultiple(List<int> nums, int k) {
    final int n = nums.length;
    HashSet<int> s = new HashSet<int>();
    for (int i = 0; i < n; i++) {
      s.add(nums[i]);
    }
    int ans = k;
    while (s.contains(ans)) {
      ans += k;
    }
    return ans;
  }
}
