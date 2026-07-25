// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
class Solution {
    public int maxProduct(int n) {
        int x = 0, y = 0;
        while (n > 0) {
            final int k = n % 10;
            if (k > x) {
                y = x;
                x = k;
            } else if (k > y) {
                y = k;
            }
            n /= 10;
        }
        final int ans = x * y;
        return ans;
    }
}