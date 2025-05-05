// Problem: Unique Paths
// Link to the problem: https://leetcode.com/problems/unique-paths/
/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var uniquePaths = function (m, n) {
    let ans = 1;
    let down_moves = m - 1;
    let right_moves = n - 1;
    let x = Math.max(down_moves, right_moves);
    let y = Math.min(down_moves, right_moves);
    for (let i = 1; i <= y; i++) {
        ans *= (x + i);
        ans = ans / i >> 0;
    }
    return ans;
};