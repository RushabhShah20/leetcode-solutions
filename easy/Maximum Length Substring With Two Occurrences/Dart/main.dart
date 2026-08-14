// Problem: Maximum Length Substring With Two Occurrences
// Link to the problem: https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/
class Solution {
  int maximumLengthSubstring(String s) {
    final int n = s.length;
    int i = 0, j = 0, ans = 0;
    List<int> a = new List.filled(26, 0);
    while (j < n) {
      a[s.codeUnitAt(j) - 'a'.codeUnitAt(0)]++;
      while (a[s.codeUnitAt(j) - 'a'.codeUnitAt(0)] > 2 && i < n) {
        a[s.codeUnitAt(i) - 'a'.codeUnitAt(0)]--;
        i++;
      }
      ans = max(ans, j - i + 1);
      j++;
    }
    return ans;
  }
}
