// Problem: Check if Strings Can be Made Equal With Operations I
// Link to the problem: https://leetcode.com/problems/check-if-strings-can-be-made-equal-with-operations-i/
class Solution {
  bool canBeEqual(String s1, String s2) {
    final bool x =
        (s1[0] == s2[0] && s1[2] == s2[2]) ||
        (s1[0] == s2[2] && s1[2] == s2[0]);
    final bool y =
        (s1[1] == s2[1] && s1[3] == s2[3]) ||
        (s1[1] == s2[3] && s1[3] == s2[1]);
    final bool ans = x && y;
    return ans;
  }
}
