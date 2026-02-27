// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
impl Solution {
    pub fn diagonal_sum(mat: Vec<Vec<i32>>) -> i32 {
        let n: usize = mat.len();
        let mut ans: i32 = 0;
        for i in 0..n {
            ans += mat[i][i];
            if (i != n - 1 - i) {
                ans += mat[i][n - i - 1];
            }
        }
        return ans;
    }
}
