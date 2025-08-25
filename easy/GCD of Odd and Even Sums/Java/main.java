// Problem: GCD of Odd and Even Sums
// Link to the problem: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
class Solution {
    public int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public int gcdOfOddEvenSums(int n) {
        return gcd(((n) * (n + 1)), (int) (Math.pow(n, 2)));
    }
}