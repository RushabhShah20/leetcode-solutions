// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
impl Solution {
    pub fn num_special(mat: Vec<Vec<i32>>) -> i32 {
        let m: usize = mat.len();
        let n: usize = mat[0].len();
        let mut ans: i32 = 0;
        let mut rows: Vec<i32> = vec![0; m];
        let mut cols: Vec<i32> = vec![0; n];
        for i in 0..m {
            for j in 0..n {
                if (mat[i][j] == 1) {
                    rows[i] += 1;
                    cols[j] += 1;
                }
            }
        }
        for i in 0..m {
            for j in 0..n {
                if (rows[i] == 1 && cols[j] == 1 && mat[i][j] == 1) {
                    ans += 1;
                }
            }
        }
        return ans;
    }
}
