// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
function minimumArea(grid: number[][]): number {
    let m: number = grid.length, n: number = grid[0].length;
    let a: number = Number.MAX_SAFE_INTEGER, b: number = Number.MAX_SAFE_INTEGER, c: number = Number.MIN_SAFE_INTEGER, d: number = Number.MIN_SAFE_INTEGER;
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