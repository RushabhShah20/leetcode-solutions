// Problem: Check if Strings Can be Made Equal With Operations II
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-ii/
class Solution {
  bool checkStrings(String s1, String s2) {
    final int n = s1.length;
    List<int> x = new List.filled(52, 0), y = new List.filled(52, 0);
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) {
        x[s1[i].codeUnitAt(0) - 'a'.codeUnitAt(0)]++;
        y[s2[i].codeUnitAt(0) - 'a'.codeUnitAt(0)]++;
      } else {
        x[s1[i].codeUnitAt(0) - 'a'.codeUnitAt(0) + 26]++;
        y[s2[i].codeUnitAt(0) - 'a'.codeUnitAt(0) + 26]++;
      }
    }
    for (int i = 0; i < 52; i++) {
      if (x[i] != y[i]) {
        return false;
      }
    }
    return true;
  }
}
