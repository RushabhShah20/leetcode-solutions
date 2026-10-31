// Problem: Twisted Mirror Path Count
// Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
function uniquePaths(grid: number[][]): number {
    const k: number = 1000000007, n: number = grid.length, m = grid[0].length;
    let a: number[][] = Array.from({ length: m }, () => [0, 0]);
    a[0][0] = 1;
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < m; j++) {
            if (i > 0) {
                if (grid[i - 1][j] === 0) {
                    a[j][0] = (a[j][0] + a[j][1]) % k;
                }
                else {
                    a[j][0] = a[j][1];
                }
            }
            if (j > 0) {
                if (grid[i][j - 1] === 0) {
                    a[j][1] = (a[j - 1][0] + a[j - 1][1]) % k;
                }
                else {
                    a[j][1] = a[j - 1][0];
                }
            }
        }
    }
    const ans: number = (a[m - 1][0] + a[m - 1][1]) % k;
    return ans;
};