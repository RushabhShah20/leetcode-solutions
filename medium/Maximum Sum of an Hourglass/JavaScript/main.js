// Problem: Maximum Sum of an Hourglass
// Link to the problem: https://leetcode.com/problems/maximum-sum-of-an-hourglass/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var maxSum = function (grid) {
    let m = grid.length, n = grid[0].length, ans = 0;
    for (let i = 1; i < m - 1; i++) {
        for (let j = 1; j < n - 1; j++) {
            let x = grid[i - 1][j - 1] + grid[i - 1][j] + grid[i - 1][j + 1] + grid[i][j] + grid[i + 1][j - 1] + grid[i + 1][j] + grid[i + 1][j + 1];
            ans = Math.max(ans, x);
        }
    }
    return ans;
};