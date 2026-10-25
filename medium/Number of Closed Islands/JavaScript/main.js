// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var dfs = function (x, y, n, m, grid) {
    if (x < 0 || x >= n || y < 0 || y >= m) {
        return false;
    }
    if (grid[x][y] === 1) {
        return true;
    }
    grid[x][y] = 1;
    const a = dfs(x - 1, y, n, m, grid);
    const b = dfs(x + 1, y, n, m, grid);
    const c = dfs(x, y - 1, n, m, grid);
    const d = dfs(x, y + 1, n, m, grid);
    const ans = a && b && c && d;
    return ans;
}
var closedIsland = function (grid) {
    const n = grid.length, m = grid[0].length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < m; j++) {
            if (grid[i][j] === 0) {
                if (dfs(i, j, n, m, grid)) {
                    ans++;
                }
            }
        }
    }
    return ans;
};