// Problem: Number of Closed Islands
// Link to the problem: https://leetcode.com/problems/number-of-closed-islands/
impl Solution {
    pub fn dfs(x: usize, y: usize, n: usize, m: usize, grid: &mut Vec<Vec<i32>>) -> bool {
        if (x < 0 || x >= n || y < 0 || y >= m) {
            return false;
        }
        if (grid[x][y] == 1) {
            return true;
        }
        grid[x][y] = 1;
        let a: bool = Self::dfs(x - 1, y, n, m, grid);
        let b: bool = Self::dfs(x + 1, y, n, m, grid);
        let c: bool = Self::dfs(x, y - 1, n, m, grid);
        let d: bool = Self::dfs(x, y + 1, n, m, grid);
        let ans: bool = a && b && c && d;
        return ans;
    }
    pub fn closed_island(mut grid: Vec<Vec<i32>>) -> i32 {
        let n: usize = grid.len();
        let m: usize = grid[0].len();
        let mut a: &mut Vec<Vec<i32>> = &mut grid;
        let mut ans: i32 = 0;
        for i in 0..n {
            for j in 0..m {
                if (a[i][j] == 0) {
                    if (Self::dfs(i, j, n, m, a)) {
                        ans += 1;
                    }
                }
            }
        }
        return ans;
    }
}
