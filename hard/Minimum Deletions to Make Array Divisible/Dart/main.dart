// Problem: Minimum Deletions to Make Array Divisible
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-array-divisible/
import 'dart:collection';

class Solution {
  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }

  int minOperations(List<int> nums, List<int> numsDivide) {
    int x = numsDivide[0];
    for (int i = 1; i < numsDivide.length; i++) {
      x = gcd(x, numsDivide[i]);
    }
    int ans = 0;
    SplayTreeMap<int, int> y = new SplayTreeMap<int, int>();
    for (int i = 0; i < nums.length; i++) {
      y[nums[i]] = (y[nums[i]] ?? 0) + 1;
    }
    for (MapEntry<int, int> entry in y.entries) {
      if (x % entry.key == 0) {
        break;
      } else {
        ans += entry.value;
      }
    }
    if (ans == nums.length) {
      return -1;
    } else {
      return ans;
    }
  }
}
