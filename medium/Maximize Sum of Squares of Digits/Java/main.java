// Problem: Maximize Sum of Squares of Digits
// Link to the problem: https://leetcode.com/problems/maximize-sum-of-squares-of-digits/
class Solution {
    public String maxSumOfSquares(int num, int sum) {
        if (sum < 1 || sum > 9 * num) {
            return "";
        }
        StringBuilder ans = new StringBuilder();
        final int x = sum / 9, y = sum % 9;
        ans.append("9".repeat(x));
        num -= x;
        if (y > 0) {
            ans.append((char) (y + '0'));
            num--;
        }
        ans.append("0".repeat(num));
        return ans.toString();
    }
}