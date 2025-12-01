// Problem: Range Addition II
// Link to the problem: https://leetcode.com/problems/range-addition-ii/
/**
 * @param {number} m
 * @param {number} n
 * @param {number[][]} ops
 * @return {number}
 */
var maxCount = function (m, n, ops) {
    for (const op of ops) {
        m = Math.min(m, op[0]);
        n = Math.min(n, op[1]);
    }
    const ans = m * n;
    return ans;
};