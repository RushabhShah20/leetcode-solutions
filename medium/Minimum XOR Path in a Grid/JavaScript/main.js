// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var minCost = function (grid) {
    const m = grid.length, n = grid[0].length;
    const dp = Array.from({ length: m }, () =>
        Array.from({ length: n }, () => new Array(1024).fill(0))
    );
    dp[0][0][grid[0][0]] = 1;
    for (let i = 1; i < m; i++) {
        for (let k = 0; k < 1024; k++) {
            if (dp[i - 1][0][k] === 1) {
                dp[i][0][k ^ grid[i][0]] = 1;
            }
        }
    }
    for (let j = 1; j < n; j++) {
        for (let k = 0; k < 1024; k++) {
            if (dp[0][j - 1][k] === 1) {
                dp[0][j][k ^ grid[0][j]] = 1;
            }
        }
    }
    for (let i = 1; i < m; i++) {
        for (let j = 1; j < n; j++) {
            for (let k = 0; k < 1024; k++) {
                if (dp[i - 1][j][k] === 1 || dp[i][j - 1][k] === 1) {
                    dp[i][j][k ^ grid[i][j]] = 1;
                }
            }
        }
    }
    for (let k = 0; k < 1024; k++) {
        if (dp[m - 1][n - 1][k] === 1) {
            return k;
        }
    }
    return 0;
};