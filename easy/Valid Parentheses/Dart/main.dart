// Problem: Valid Parentheses
// Link to the problem: https://leetcode.com/problems/valid-parentheses/
class Solution {
  bool isValid(String s) {
    final int n = s.length;
    List<String> st = new List.empty(growable: true);
    for (int i = 0; i < n; i++) {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
        st.add(s[i]);
      } else {
        if (st.length == 0) {
          return false;
        }
        final String x = st[st.length - 1], y = s[i];
        if ((x == '(' && y == ')') ||
            (x == '{' && y == '}') ||
            (x == '[' && y == ']')) {
          st.removeLast();
        } else {
          return false;
        }
      }
    }
    final bool ans = st.length == 0;
    return ans;
  }
}
