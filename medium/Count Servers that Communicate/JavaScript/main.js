// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var countServers = function (grid) {
    const m = grid.length, n = grid[0].length;
    let rows = new Array(m).fill(0), cols = new Array(n).fill(0);
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (grid[i][j] === 1) {
                rows[i]++;
                cols[j]++;
            }
        }
    }
    let ans = 0;
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (grid[i][j] === 1) {
                if (rows[i] > 1 || cols[j] > 1) {
                    ans++;
                }
            }
        }
    }
    return ans;
};