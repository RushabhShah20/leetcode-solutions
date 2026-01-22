// Problem: Counting Bits
// Link to the problem: https://leetcode.com/problems/counting-bits/
/**
 * @param {number} n
 * @return {number[]}
 */
var countBits = function (n) {
    let ans = new Array(n + 1).fill(0);
    for (let i = 1; i <= n; i++) {
        ans[i] = ans[i >> 1] + (i & 1);
    }
    return ans;
};