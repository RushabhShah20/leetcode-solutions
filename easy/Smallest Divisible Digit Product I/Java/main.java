// Problem: Smallest Divisible Digit Product I
// Link to the problem: https://leetcode.com/problems/smallest-divisible-digit-product-i/
class Solution {
    public int getProduct(int n) {
        int product = 1;
        while (n != 0) {
            product = product * (n % 10);
            n = n / 10;
        }
        return product;
    }

    public int smallestNumber(int n, int t) {
        int ans = n;
        for (int i = n; i <= n + (10 - (n % 10)); i++) {
            if (getProduct(i) % t == 0) {
                ans = i;
                break;
            }
        }
        return ans;
    }
}