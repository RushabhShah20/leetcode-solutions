// Problem: Is Subsequence
// Link to the problem: https://leetcode.com/problems/is-subsequence/
class Solution {
  bool isSubsequence(String s, String t) {
    int n = t.length, m = s.length, i = 0, j = 0;
    while (i < n && j < m) {
      if (t[i] == s[j]) {
        j++;
      }
      i++;
    }
    if (j < m) {
      return false;
    } else {
      return true;
    }
  }
}
