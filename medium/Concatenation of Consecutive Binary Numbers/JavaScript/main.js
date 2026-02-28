// Problem: Concatenation of Consecutive Binary Numbers
// Link to the problem: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
/**
 * @param {number} n
 * @return {number}
 */
var concatenatedBinary = function (n) {
    const mod = 1000000007;
    let ans = 0;
    for (let i = 1; i <= n; i++) {
        let x = i;
        while (x > 0) {
            x = Math.floor(x / 2);
            ans *= 2;
        }
        ans = (ans + i) % mod;
    }
    return ans;
};