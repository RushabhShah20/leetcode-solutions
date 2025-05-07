// Problem: Number of 1 Bits
// Link to the problem: https://leetcode.com/problems/number-of-1-bits/
/**
 * @param {number} n
 * @return {number}
 */
var hammingWeight = function (n) {
    let ans = 0;
    while (n !== 0) {
        n &= (n - 1);
        ans++;
    }
    return ans;
};