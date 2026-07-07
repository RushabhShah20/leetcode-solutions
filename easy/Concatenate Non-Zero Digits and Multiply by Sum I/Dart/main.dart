// Problem: Concatenate Non-Zero Digits and Multiply by Sum I
// Link to the problem: https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/
class Solution {
  int sumAndMultiply(int n) {
    int x = 0, y = 0, a = 1;
    while (n > 0) {
      final int z = n % 10;
      n ~/= 10;
      if (z == 0) {
        continue;
      }
      x = z * a + x;
      y += z;
      a *= 10;
    }
    final int ans = x * y;
    return ans;
  }
}
