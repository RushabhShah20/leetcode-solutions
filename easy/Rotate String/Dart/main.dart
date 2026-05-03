// Problem: Rotate String
// Link to the problem: https://leetcode.com/problems/rotate-string/
class Solution {
  bool rotateString(String s, String goal) {
    if (s.length != goal.length) {
      return false;
    } else {
      s = s + s;
      final bool ans = s.contains(goal);
      return ans;
    }
  }
}
