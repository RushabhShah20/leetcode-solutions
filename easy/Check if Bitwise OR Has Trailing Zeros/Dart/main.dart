// Problem: Check if Bitwise OR Has Trailing Zeros
// Link to the problem: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
class Solution {
  bool hasTrailingZeros(List<int> nums) {
    int count = 0;
    for (int num in nums) {
      if (num % 2 == 0) {
        count++;
      }
      if (count == 2) {
        return true;
      }
    }
    return false;
  }
}
