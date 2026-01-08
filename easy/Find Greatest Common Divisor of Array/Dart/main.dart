// Problem: Find Greatest Common Divisor of Array
// Link to the problem: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
class Solution {
  int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
  }

  int findGCD(List<int> nums) {
    int maxVal = 0, minVal = 1001;
    for (final int num in nums) {
      maxVal = max(maxVal, num);
      minVal = min(minVal, num);
    }
    final int ans = gcd(maxVal, minVal);
    return ans;
  }
}
