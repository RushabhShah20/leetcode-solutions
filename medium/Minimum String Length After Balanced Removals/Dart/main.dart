// Problem: Minimum String Length After Balanced Removals
// Link to the problem: https://leetcode.com/problems/minimum-string-length-after-balanced-removals/
class Solution {
  int minLengthAfterRemovals(String s) {
    int ans = 0;
    for (int i = 0; i < s.length; i++) {
      ans += s[i] == 'a' ? 1 : -1;
    }
    return ans.abs();
  }
}
