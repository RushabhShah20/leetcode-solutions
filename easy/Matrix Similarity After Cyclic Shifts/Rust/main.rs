// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
impl Solution {
    pub fn are_similar(mat: Vec<Vec<i32>>, k: i32) -> bool {
        let m: usize = mat.len();
        let n: usize = mat[0].len();
        for i in 0..m {
            for j in 0..n {
                if (mat[i][j] != mat[i][(j + (k as usize)) % n]) {
                    return false;
                }
            }
        }
        return true;
    }
}
