// Problem: Reverse Bits
// Link to the problem: https://leetcode.com/problems/reverse-bits/
class Solution {
  int reverseBits(int n) {
    int ans = 0;
    for (int i = 0; i < 32; i++) {
      ans <<= 1;
      ans |= (n & 1);
      n >>= 1;
    }
    return ans;
  }
}
