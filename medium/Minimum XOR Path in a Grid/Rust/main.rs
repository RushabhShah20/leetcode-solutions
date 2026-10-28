// Problem: Minimum XOR Path in a Grid
// Link to the problem: https://leetcode.com/problems/minimum-xor-path-in-a-grid/
impl Solution {
    pub fn min_cost(grid: Vec<Vec<i32>>) -> i32 {
        let m: usize = grid.len();
        let n: usize = grid[0].len();
        let mut dp: Vec<Vec<Vec<i32>>> = vec![vec![vec![0; 1024]; n]; m];
        dp[0][0][grid[0][0] as usize] = 1;
        for i in 1..m {
            for k in 0..1024 {
                if dp[i - 1][0][k] == 1 {
                    let nk: usize = k ^ (grid[i][0] as usize);
                    dp[i][0][nk] = 1;
                }
            }
        }
        for j in 1..n {
            for k in 0..1024 {
                if dp[0][j - 1][k] == 1 {
                    let nk: usize = k ^ (grid[0][j] as usize);
                    dp[0][j][nk] = 1;
                }
            }
        }
        for i in 1..m {
            for j in 1..n {
                for k in 0..1024 {
                    if dp[i - 1][j][k] == 1 || dp[i][j - 1][k] == 1 {
                        let nk: usize = k ^ (grid[i][j] as usize);
                        dp[i][j][nk] = 1;
                    }
                }
            }
        }
        for k in 0..1024 {
            if dp[m - 1][n - 1][k] == 1 {
                return k as i32;
            }
        }
        return 0;
    }
}
