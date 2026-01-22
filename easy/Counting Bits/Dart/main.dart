// Problem: Counting Bits
// Link to the problem: https://leetcode.com/problems/counting-bits/
class Solution {
  List<int> countBits(int n) {
    List<int> ans = new List.filled(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      ans[i] = ans[i >> 1] + (i & 1);
    }
    return ans;
  }
}
