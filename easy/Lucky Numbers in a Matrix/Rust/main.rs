// Problem: Lucky Numbers in a Matrix
// Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
impl Solution {
    pub fn lucky_numbers(matrix: Vec<Vec<i32>>) -> Vec<i32> {
        let m: usize = matrix.len();
        let n: usize = matrix[0].len();
        let mut ans: Vec<i32> = Vec::new();
        let mut col: i32 = -1;
        for i in 0..m {
            let mut minVal: i32 = 100001;
            let mut maxVal: i32 = 0;
            for j in 0..n {
                if (matrix[i][j] < minVal) {
                    minVal = matrix[i][j];
                    col = j as i32;
                }
            }
            for k in 0..m {
                if (matrix[k][col as usize] > maxVal) {
                    maxVal = matrix[k][col as usize];
                }
            }
            if (minVal == maxVal) {
                ans.push(minVal);
            }
        }
        return ans;
    }
}
