// Problem: Check Divisibility by Digit Sum and Product
// Link to the problem: https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/
/**
 * @param {number} n
 * @return {boolean}
 */
var checkDivisibility = function (n) {
    let x = 0, y = 1, m = n;
    while (m > 0) {
        const z = m % 10;
        x += z;
        y *= z;
        m = Math.floor(m / 10);
    }
    const ans = n % (x + y) == 0;
    return ans;
};