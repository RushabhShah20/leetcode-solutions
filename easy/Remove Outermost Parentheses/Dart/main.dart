// Problem: Remove Outermost Parentheses
// Link to the problem: https://leetcode.com/problems/remove-outermost-parentheses/
class Solution {
  String removeOuterParentheses(String s) {
    final int n = s.length;
    int x = 0;
    String ans = "";
    for (int i = 0; i < n; i++) {
      if (s[i] == ')') {
        x--;
      }
      if (x > 0) {
        ans += s[i];
      }
      if (s[i] == '(') {
        x++;
      }
    }
    return ans;
  }
}
