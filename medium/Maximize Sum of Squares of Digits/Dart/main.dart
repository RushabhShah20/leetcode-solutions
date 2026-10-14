// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
class Solution {
  String maxSumOfSquares(int num, int sum) {
    if (sum < 1 || sum > 9 * num) {
      return "";
    }
    final int x = sum ~/ 9, y = sum % 9;
    final StringBuffer ans = StringBuffer();
    ans.write('9' * x);
    num -= x;
    if (y > 0) {
      ans.write(y);
      num--;
    }
    ans.write('0' * num);
    return ans.toString();
  }
}
