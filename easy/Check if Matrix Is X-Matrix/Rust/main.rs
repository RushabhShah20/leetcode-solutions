// Problem: Check if Matrix Is X-Matrix
// Link to the problem: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
impl Solution {
    pub fn check_x_matrix(grid: Vec<Vec<i32>>) -> bool {
        for i in 0..grid.len() {
            for j in 0..grid[0].len() {
                if (i == j || i + j == (grid.len() - 1)) {
                    if (grid[i][j] == 0) {
                        return false;
                    }
                } else {
                    if (grid[i][j] != 0) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}
