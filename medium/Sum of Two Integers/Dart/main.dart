// Problem: Sum of Two Integers
// Link to the problem: https://leetcode.com/problems/sum-of-two-integers/
class Solution {
  int getSum(int a, int b) {
    while (b != 0) {
      int x = (a & b) << 1;
      a = a ^ b;
      b = x;
    }
    return a;
  }
}
