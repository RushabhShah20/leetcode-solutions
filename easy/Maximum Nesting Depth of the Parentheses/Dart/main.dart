// Problem: Maximum Nesting Depth of the Parentheses
// Link to the problem: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
class Solution {
  int maxDepth(String s) {
    final int n = s.length;
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '(') {
        x++;
      }
      if (s[i] == ')') {
        x--;
      }
      ans = max(ans, x);
    }
    return ans;
  }
}
