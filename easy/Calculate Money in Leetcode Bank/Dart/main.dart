// Problem: Calculate Money in Leetcode Bank
// Link to the problem: https://leetcode.com/problems/calculate-money-in-leetcode-bank/
class Solution {
  int totalMoney(int n) {
    int q = n ~/ 7;
    int r = n % 7;
    int ans = ((q * (q - 1)) ~/ 2) * 7;
    ans += q * 28;
    ans += ((r * (r + 1)) ~/ 2) + (q * r);
    return ans;
  }
}
