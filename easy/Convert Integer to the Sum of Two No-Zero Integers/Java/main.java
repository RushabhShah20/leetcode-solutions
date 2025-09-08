// Problem: Convert Integer to the Sum of Two No-Zero Integers
// Link to the problem: https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/
class Solution {
    public boolean isNonZero(int n) {
        while (n > 0) {
            if (n % 10 == 0) {
                return false;
            }
            n /= 10;
        }
        return true;
    }

    public int[] getNoZeroIntegers(int n) {
        for (int i = 1; i <= n; i++) {
            if (isNonZero(i) && isNonZero(n - i)) {
                return new int[] { i, n - i };
            }
        }
        return new int[] {};
    }
}