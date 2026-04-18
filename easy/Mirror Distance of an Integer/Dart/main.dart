// Problem: Mirror Distance of an Integer
// Link to the problem: https://leetcode.com/problems/mirror-distance-of-an-integer/
class Solution {
  int rev(int n) {
    int ans = 0;
    while (n > 0) {
      ans = ans * 10 + n % 10;
      n ~/= 10;
    }
    return ans;
  }

  int mirrorDistance(int n) {
    final int m = rev(n), ans = (m - n).abs();
    return ans;
  }
}
