// Problem: Count Islands With Total Value Divisible by K
// Link to the problem: https://leetcode.com/problems/count-islands-with-total-value-divisible-by-k/
impl Solution {
    pub fn dfs(x: usize, y: usize, n: usize, m: usize, grid: &mut Vec<Vec<i32>>) -> i64 {
        let mut z: i64 = grid[x][y] as i64;
        grid[x][y] = 0;
        let a: Vec<i32> = vec![-1, 0, 1, 0];
        let b: Vec<i32> = vec![0, 1, 0, -1];
        for i in 0..4 {
            let c: i32 = x as i32 + a[i];
            let d: i32 = y as i32 + b[i];
            if (c >= 0
                && c < n as i32
                && d >= 0
                && d < m as i32
                && grid[c as usize][d as usize] > 0)
            {
                z += Self::dfs(c as usize, d as usize, n, m, grid);
            }
        }
        return z;
    }
    pub fn count_islands(mut grid: Vec<Vec<i32>>, k: i32) -> i32 {
        let n: usize = grid.len();
        let m: usize = grid[0].len();
        let mut ans: i32 = 0;
        let a: &mut Vec<Vec<i32>> = &mut grid;
        for i in 0..n {
            for j in 0..m {
                if (a[i][j] > 0 && Self::dfs(i, j, n, m, a) % (k as i64) == 0) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
