// Problem: Longest Uncommon Subsequence I
// Link to the problem: https://leetcode.com/problems/longest-uncommon-subsequence-i/
class Solution {
  int findLUSlength(String a, String b) {
    if (a == b) {
      return -1;
    } else {
      return max(a.length, b.length);
    }
  }
}
