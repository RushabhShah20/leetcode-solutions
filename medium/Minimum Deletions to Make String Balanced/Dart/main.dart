// Problem: Minimum Deletions to Make String Balanced
// Link to the problem: https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/
class Solution {
  int minimumDeletions(String s) {
    final int n = s.length;
    int ans = 0, count = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'b') {
        count++;
      } else {
        ans = min(ans + 1, count);
      }
    }
    return ans;
  }
}
