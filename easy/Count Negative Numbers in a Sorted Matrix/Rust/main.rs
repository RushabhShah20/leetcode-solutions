// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
impl Solution {
    pub fn count_negatives(grid: Vec<Vec<i32>>) -> i32 {
        let m: usize = grid.len();
        let n: usize = grid[0].len();
        let mut ans: i32 = 0;
        let mut i: i32 = (m - 1) as i32;
        let mut j: i32 = 0;
        while (i >= 0 && (j as usize) < n) {
            if (grid[i as usize][j as usize] < 0) {
                ans += ((n - (j as usize)) as i32);
                i -= 1;
            } else {
                j += 1;
            }
        }
        return ans;
    }
}
