// Problem: Find the Minimum Area to Cover All Ones I
// Link to the problem: https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/
impl Solution {
    pub fn minimum_area(grid: Vec<Vec<i32>>) -> i32 {
        let mut a: i32 = i32::MAX;
        let mut b: i32 = i32::MAX;
        let mut c: i32 = i32::MIN;
        let mut d: i32 = i32::MIN;
        for i in 0..grid.len() {
            for j in 0..grid[0].len() {
                if (grid[i][j] == 1) {
                    a = std::cmp::min(a, i as i32);
                    b = std::cmp::min(b, j as i32);
                    c = std::cmp::max(c, i as i32);
                    d = std::cmp::max(d, j as i32);
                }
            }
        }
        return (c - a + 1) * (d - b + 1);
    }
}
