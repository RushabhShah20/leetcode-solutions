// Problem: Consecutive Characters
// Link to the problem: https://leetcode.com/problems/consecutive-characters/
class Solution {
  int maxPower(String s) {
    int ans = 1, count = 1;
    for (int i = 0; i < s.length - 1; i++) {
      if (s[i] == s[i + 1]) {
        count++;
        ans = max(ans, count);
      } else {
        count = 1;
      }
    }
    return ans;
  }
}
