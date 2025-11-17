// Problem: Rotate Image
// Link to the problem: https://leetcode.com/problems/rotate-image/
impl Solution {
    pub fn rotate(matrix: &mut Vec<Vec<i32>>) {
        let n: usize = matrix.len();
        for i in 0..n {
            for j in i + 1..n {
                let temp: i32 = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for i in 0..n {
            for j in 0..n / 2 {
                let temp: i32 = matrix[i][j];
                matrix[i][j] = matrix[i][n - 1 - j];
                matrix[i][n - 1 - j] = temp;
            }
        }
    }
}
