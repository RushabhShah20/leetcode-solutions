// Problem: Maximum Sum of an Hourglass
// Link to the problem: https://leetcode.com/problems/maximum-sum-of-an-hourglass/
impl Solution {
    pub fn max_sum(grid: Vec<Vec<i32>>) -> i32 {
        let m: usize = grid.len();
        let n: usize = grid[0].len();
        let mut ans: i32 = 0;
        for i in 1..m - 1 {
            for j in 1..n - 1 {
                let x: i32 = grid[i - 1][j - 1]
                    + grid[i - 1][j]
                    + grid[i - 1][j + 1]
                    + grid[i][j]
                    + grid[i + 1][j - 1]
                    + grid[i + 1][j]
                    + grid[i + 1][j + 1];
                ans = ans.max(x);
            }
        }
        return ans;
    }
}
