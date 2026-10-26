// Problem: Count Islands With Total Value Divisible by K
// Link to the problem: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
/**
 * @param {number[][]} grid
 * @param {number} k
 * @return {number}
 */
var dfs = function (x, y, n, m, grid) {
    let z = grid[x][y];
    grid[x][y] = 0;
    const a = [-1, 0, 1, 0], b = [0, 1, 0, -1];
    for (let i = 0; i < 4; i++) {
        const c = x + a[i], d = y + b[i];
        if (c >= 0 && c < n && d >= 0 && d < m && grid[c][d] > 0) {
            z += dfs(c, d, n, m, grid);
        }
    }
    return z;
}
var countIslands = function (grid, k) {
    const n = grid.length, m = grid[0].length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < m; j++) {
            if (grid[i][j] > 0 && dfs(i, j, n, m, grid) % k === 0) {
                ans++;
            }
        }
    }
    return ans;
};