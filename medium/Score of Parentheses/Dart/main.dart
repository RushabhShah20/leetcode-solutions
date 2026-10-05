// Problem: Score of Parentheses
// Link to the problem: https://leetcode.com/problems/score-of-parentheses/
class Solution {
  int scoreOfParentheses(String s) {
    final int n = s.length;
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '(') {
        x++;
      } else {
        x--;
        if (s[i - 1] == '(') {
          ans += 1 << x;
        }
      }
    }
    return ans;
  }
}
