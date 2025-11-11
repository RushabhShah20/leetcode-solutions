// Problem: Ones and Zeroes
// Link to the problem: https://leetcode.com/problems/ones-and-zeroes/
/**
 * @param {string[]} strs
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var findMaxForm = function (strs, m, n) {
    let dp = Array.from({ length: m + 1 }, () => new Array(n + 1).fill(0));
    for (const str of strs) {
        let zeroes = 0, ones = 0;
        for (const ch of str) {
            if (ch === '0') {
                zeroes++;
            }
            else {
                ones++;
            }
        }
        for (let i = m; i >= zeroes; i--) {
            for (let j = n; j >= ones; j--) {
                dp[i][j] = Math.max(dp[i][j], 1 + dp[i - zeroes][j - ones]);
            }
        }
    }
    return dp[m][n];
};