// Problem: Minimum Insertions to Balance a Parentheses String
// Link to the problem: https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/
class Solution {
  int minInsertions(String s) {
    final int n = s.length;
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '(') {
        if ((x & 1) == 1) {
          ans++;
          x++;
        } else {
          x += 2;
        }
      } else if (x == 0) {
        ans++;
        x = 1;
      } else {
        x--;
      }
    }
    ans += x;
    return ans;
  }
}
