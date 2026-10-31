// Problem: Twisted Mirror Path Count
// Link to the problem: https://leetcode.com/problems/twisted-mirror-path-count/
impl Solution {
    pub fn unique_paths(grid: Vec<Vec<i32>>) -> i32 {
        let k: i32 = 1000000007;
        let n: usize = grid.len();
        let m: usize = grid[0].len();
        let mut a: Vec<Vec<i32>> = vec![vec![0; 2]; m];
        a[0][0] = 1;
        for i in 0..n {
            for j in 0..m {
                if (i > 0) {
                    if (grid[i - 1][j] == 0) {
                        a[j][0] = (a[j][0] + a[j][1]) % k;
                    } else {
                        a[j][0] = a[j][1];
                    }
                }
                if (j > 0) {
                    if (grid[i][j - 1] == 0) {
                        a[j][1] = (a[j - 1][0] + a[j - 1][1]) % k;
                    } else {
                        a[j][1] = a[j - 1][0];
                    }
                }
            }
        }
        let ans: i32 = (a[m - 1][0] + a[m - 1][1]) % k;
        return ans;
    }
}
