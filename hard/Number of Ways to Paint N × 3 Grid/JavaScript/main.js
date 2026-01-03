// Problem: Number of Ways to Paint N × 3 Grid
// Link to the problem: https://leetcode.com/problems/number-of-ways-to-paint-n-3-grid/
/**
 * @param {number} n
 * @return {number}
 */
var numOfWays = function (n) {
    const mod = 1000000007;
    let a = 6, b = 6;
    for (let i = 1; i < n; i++) {
        const x = ((3 * a) + (2 * b)) % mod;
        const y = ((2 * a) + (2 * b)) % mod;
        a = x;
        b = y;
    }
    const ans = (a + b) % mod;
    return ans;
};