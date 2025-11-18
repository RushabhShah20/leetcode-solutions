// Problem: 1-bit and 2-bit Characters
// Link to the problem: https://leetcode.com/problems/1-bit-and-2-bit-characters/
class Solution {
  bool isOneBitCharacter(List<int> bits) {
    int n = bits.length;
    int i = 0;
    while (i < n - 1) {
      i += bits[i] + 1;
    }
    return i == n - 1;
  }
}
