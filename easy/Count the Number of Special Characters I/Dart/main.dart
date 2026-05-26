// Problem: Count the Number of Special Characters I
// Link to the problem: https://leetcode.com/problems/count-the-number-of-special-characters-i/
class Solution {
  int numberOfSpecialChars(String word) {
    final int n = word.length;
    int ans = 0;
    List<int> lower = List.filled(26, 0), upper = List.filled(26, 0);
    for (int i = 0; i < n; i++) {
      final int c = word.codeUnitAt(i);
      if (c >= 'a'.codeUnitAt(0) && c <= 'z'.codeUnitAt(0)) {
        lower[c - 'a'.codeUnitAt(0)]++;
      } else {
        upper[c - 'A'.codeUnitAt(0)]++;
      }
    }
    for (int i = 0; i < 26; i++) {
      if (lower[i] > 0 && upper[i] > 0) {
        ans++;
      }
    }
    return ans;
  }
}
