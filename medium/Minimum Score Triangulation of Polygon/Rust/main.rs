// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
impl Solution {
    pub fn min_score_triangulation(values: Vec<i32>) -> i32 {
        let n: usize = values.len();
        if (n == 3) {
            return values[0] * values[1] * values[2];
        }
        let mut dp: Vec<Vec<i32>> = vec![vec![0; n]; n - 1];
        for x in 2..n {
            for i in 0..n - x {
                let j: usize = i + x;
                let mut w: i32 = i32::MAX;
                let mut e: i32 = values[i] * values[j];
                for k in i + 1..j {
                    w = w.min(e * values[k] + dp[i][k] + dp[k][j]);
                }
                dp[i][j] = w;
            }
        }
        return dp[0][n - 1];
    }
}
