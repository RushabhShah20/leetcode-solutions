// Problem: Append Characters to String to Make Subsequence
// Link to the problem: https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/
class Solution {
  int appendCharacters(String s, String t) {
    int ans = 0, i = 0, j = 0, n = s.length, m = t.length;
    while (i < n && j < m) {
      if (s[i] == t[j]) {
        j++;
      }
      i++;
    }
    ans = m - j;
    return ans;
  }
}
