// Problem: Check If Digits Are Equal in String After Operations I
// Link to the problem: https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/
class Solution {
  bool hasSameDigits(String s) {
    while (s.length != 2) {
      String t = "";
      for (int i = 0; i < s.length - 1; i++) {
        int x = int.parse(s[i]);
        int y = int.parse(s[i + 1]);
        int z = (x + y) % 10;
        t += z.toString();
      }
      s = t;
    }
    return s[0] == s[1];
  }
}
