// Problem: Count Submatrices with Top-Left Element and Sum Less Than k
// Link to the problem: https://leetcode.com/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
impl Solution {
    pub fn count_submatrices(grid: Vec<Vec<i32>>, k: i32) -> i32 {
        let m: usize = grid.len();
        let n: usize = grid[0].len();
        let mut prefix: Vec<Vec<i32>> = vec![vec![0; n + 1]; m + 1];
        for i in 1..=m {
            for j in 1..=n {
                prefix[i][j] =
                    prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + grid[i - 1][j - 1];
            }
        }
        let mut ans: i32 = 0;
        for i in 1..=m {
            for j in 1..=n {
                if prefix[i][j] <= k {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
