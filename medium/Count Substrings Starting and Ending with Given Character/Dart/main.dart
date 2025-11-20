// Problem: Count Substrings Starting and Ending with Given Character
// Link to the problem: https://leetcode.com/problems/count-substrings-starting-and-ending-with-given-character/
class Solution {
  int countSubstrings(String s, String c) {
    int m = 0;
    for (int i = 0; i < s.length; i++) {
      if (s[i] == c) {
        m++;
      }
    }
    int ans = (m * (m + 1)) ~/ 2;
    return ans;
  }
}
