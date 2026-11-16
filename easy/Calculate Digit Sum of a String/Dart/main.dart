// Problem: Calculate Digit Sum of a String
// Link to the problem: https://leetcode.com/problems/calculate-digit-sum-of-a-string/
class Solution {
  String digitSum(String s, int k) {
    while (s.length > k) {
      StringBuffer t = StringBuffer();
      final int n = s.length;
      for (int i = 0; i < n; i += k) {
        int x = 0;
        for (int j = i; j < min(i + k, n); ++j) {
          x += s.codeUnitAt(j) - '0'.codeUnitAt(0);
        }
        t.write(x);
      }
      s = t.toString();
    }
    return s;
  }
}
