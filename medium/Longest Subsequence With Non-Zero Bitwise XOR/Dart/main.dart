// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
class Solution {
  int longestSubsequence(List<int> nums) {
    int n = nums.length;
    int z = 0;
    for (int num in nums) {
      z ^= num;
    }
    if (z != 0) {
      return n;
    }
    bool x = true;
    for (int num in nums) {
      if (num != 0) {
        x = false;
        break;
      }
    }
    if (x) {
      return 0;
    }
    return n - 1;
  }
}
