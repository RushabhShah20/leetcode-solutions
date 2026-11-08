// Problem: Count Servers that Communicate
// Link to the problem: https://leetcode.com/problems/count-servers-that-communicate/
impl Solution {
    pub fn count_servers(grid: Vec<Vec<i32>>) -> i32 {
        let m: usize = grid.len();
        let n: usize = grid[0].len();
        let mut rows: Vec<i32> = vec![0; m];
        let mut cols: Vec<i32> = vec![0; n];
        for i in 0..m {
            for j in 0..n {
                if (grid[i][j] == 1) {
                    rows[i] += 1;
                    cols[j] += 1;
                }
            }
        }
        let mut ans: i32 = 0;
        for i in 0..m {
            for j in 0..n {
                if (grid[i][j] == 1) {
                    if (rows[i] > 1 || cols[j] > 1) {
                        ans += 1;
                    }
                }
            }
        }
        return ans;
    }
}
