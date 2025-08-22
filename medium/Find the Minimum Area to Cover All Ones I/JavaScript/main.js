// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var minimumArea = function (grid) {
    let m = grid.length, n = grid[0].length;
    let a = Number.MAX_SAFE_INTEGER, b = Number.MAX_SAFE_INTEGER, c = Number.MIN_SAFE_INTEGER, d = Number.MIN_SAFE_INTEGER;
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (grid[i][j] === 1) {
                a = Math.min(a, i);
                b = Math.min(b, j);
                c = Math.max(c, i);
                d = Math.max(d, j);
            }
        }
    }
    return (c - a + 1) * (d - b + 1);
};