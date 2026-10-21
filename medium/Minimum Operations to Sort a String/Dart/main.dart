// Problem: Minimum Operations to Sort a String
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-sort-a-string/
class Solution {
  int minOperations(String s) {
    final int n = s.length;
    String mn = 'z', mx = 'a';
    bool a = true;
    for (int i = 0; i < n; i++) {
      if (mx.codeUnitAt(0) < s.codeUnitAt(i)) {
        mx = s[i];
      }
      if (mn.codeUnitAt(0) > s.codeUnitAt(i)) {
        mn = s[i];
      }
      if (i > 0 && s.codeUnitAt(i - 1) > s.codeUnitAt(i)) {
        a = false;
      }
    }
    if (a) {
      return 0;
    }
    if (n == 2) {
      return -1;
    }
    if (s[0] == mn || s[n - 1] == mx) {
      return 1;
    }
    for (int i = 1; i < n - 1; i++) {
      if (s[i] == mn || s[i] == mx) {
        return 2;
      }
    }
    return 3;
  }
}
