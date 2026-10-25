// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
function dfs(x: number, y: number, n: number, m: number, grid: number[][]): boolean {
    if (x < 0 || x >= n || y < 0 || y >= m) {
        return false;
    }
    if (grid[x][y] === 1) {
        return true;
    }
    grid[x][y] = 1;
    const a: boolean = dfs(x - 1, y, n, m, grid);
    const b: boolean = dfs(x + 1, y, n, m, grid);
    const c: boolean = dfs(x, y - 1, n, m, grid);
    const d: boolean = dfs(x, y + 1, n, m, grid);
    const ans: boolean = a && b && c && d;
    return ans;
}
function closedIsland(grid: number[][]): number {
    const n: number = grid.length, m: number = grid[0].length;
    let ans: number = 0;
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