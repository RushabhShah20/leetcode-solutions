// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
class Solution {
  int gcd(int a, int b) {
    if (b == 0) {
      return a;
    } else {
      return gcd(b, a % b);
    }
  }

  int gcdOfOddEvenSums(int n) {
    return gcd((n) * (n + 1), (pow(n, 2).toInt()));
  }
}
