// Problem: Pow(x, n)
// Link to the problem: https://leetcode.com/problems/powx-n/
class Solution {
    public double myPow(double x, int n) {
        long t = n;
        if (n == 0) {
            return 1;
        }
        if (t < 1) {
            t = -1 * t;
            x = 1 / x;
        }
        if (n % 2 == 0) {
            return myPow(x * x, (int) (t / 2));
        } else {
            return x * myPow(x, (int) (t - 1));
        }
    }
}