// Problem: Check if Binary String Has at Most One Segment of Ones
// Link to the problem: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/
class Solution {
  bool checkOnesSegment(String s) {
    int count = 0;
    for (int i = 1; i < s.length; i++) {
      if (s[i] == '0') {
        count++;
      }
      if (s[i] == '1' && count != 0) {
        return false;
      }
    }
    return true;
  }
}
