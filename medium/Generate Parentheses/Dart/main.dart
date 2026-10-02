// Problem: Generate Parentheses
// Link to the problem: https://leetcode.com/problems/generate-parentheses/
class Solution {
  List<String> generateParenthesis(int n) {
    if (n == 0) {
      return [""];
    }
    List<String> ans = new List.empty(growable: true);
    for (int i = 0; i < n; i++) {
      final List<String> l = generateParenthesis(i),
          r = generateParenthesis(n - 1 - i);
      for (int j = 0; j < l.length; j++) {
        for (int k = 0; k < r.length; k++) {
          ans.add("(" + l[j] + ")" + r[k]);
        }
      }
    }
    return ans;
  }
}
