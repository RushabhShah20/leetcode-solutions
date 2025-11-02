// Problem: Count Unguarded Cells in the Grid
// Link to the problem: https://leetcode.com/problems/count-unguarded-cells-in-the-grid/
/**
 * @param {number} m
 * @param {number} n
 * @param {number[][]} guards
 * @param {number[][]} walls
 * @return {number}
 */
var countUnguarded = function (m, n, guards, walls) {
    let grid = Array.from({ length: m }, () => new Array(n).fill(0));
    for (const wall of walls) {
        grid[wall[0]][wall[1]] = 2;
    }
    for (const guard of guards) {
        grid[guard[0]][guard[1]] = 2;
    }
    let dr = [-1, 0, 1, 0], dc = [0, 1, 0, -1];
    for (const guard of guards) {
        let gr = guard[0], gc = guard[1];
        for (let i = 0; i < 4; i++) {
            let r = gr + dr[i], c = gc + dc[i];
            while (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] < 2) {
                grid[r][c] = 1;
                r += dr[i];
                c += dc[i];
            }
        }
    }
    let ans = 0;
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (grid[i][j] === 0) {
                ans++;
            }
        }
    }
    return ans;
};