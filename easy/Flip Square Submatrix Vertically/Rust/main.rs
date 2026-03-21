// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
impl Solution {
    pub fn reverse_submatrix(grid: Vec<Vec<i32>>, x: i32, y: i32, k: i32) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = grid;
        for i in x..x + (k + 1) / 2 {
            for j in y..y + k {
                let temp: i32 = ans[i as usize][j as usize];
                ans[i as usize][j as usize] = ans[(2 * x + k - i - 1) as usize][j as usize];
                ans[(2 * x + k - i - 1) as usize][j as usize] = temp;
            }
        }
        return ans;
    }
}
