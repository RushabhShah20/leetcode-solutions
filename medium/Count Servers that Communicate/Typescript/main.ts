// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
function countServers(grid: number[][]): number {
    const m: number = grid.length, n: number = grid[0].length;
    let rows: number[] = new Array(m).fill(0), cols: number[] = new Array(n).fill(0);
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (grid[i][j] === 1) {
                rows[i]++;
                cols[j]++;
            }
        }
    }
    let ans: number = 0;
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