// Problem: Maximum Number of Operations to Move Ones to the End
// Link to the problem: https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/
class Solution {
  int maxOperations(String s) {
    int ans = 0, n = s.length, ones = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        ones++;
      } else if (i > 0 && s[i - 1] == '1') {
        ans += ones;
      }
    }
    return ans;
  }
}
