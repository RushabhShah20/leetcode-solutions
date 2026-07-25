// Problem: Maximum Produdct of Two Digits
// Link to the problem: https://leetcode.com/problems/maximum-product-of-two-digits/
/**
 * @param {number} n
 * @return {number}
 */
var maxProduct = function (n) {
    let x = 0, y = 0;
    while (n > 0) {
        const k = n % 10;
        if (k > x) {
            y = x;
            x = k;
        }
        else if (k > y) {
            y = k;
        }
        n = Math.floor(n / 10);
    }
    const ans = x * y;
    return ans;
};