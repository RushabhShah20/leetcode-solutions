// Problem: Count Binary Substrings
// Link to the problem: https://leetcode.com/problems/count-binary-substrings/
class Solution {
  int countBinarySubstrings(String s) {
    final int n = s.length;
    int ans = 0, prev = 0, curr = 1;
    for (int i = 1; i < n; i++) {
      if (s[i - 1] != s[i]) {
        ans += min(prev, curr);
        prev = curr;
        curr = 1;
      } else {
        curr++;
      }
    }
    ans += min(prev, curr);
    return ans;
  }
}
