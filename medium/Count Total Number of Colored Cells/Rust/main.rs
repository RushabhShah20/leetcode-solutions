// Problem: Count Total Number of Colored Cells
// Link to the problem: https://leetcode.com/problems/count-total-number-of-colored-cells/
impl Solution {
    pub fn colored_cells(n: i32) -> i64 {
        let mut ans: i64 = 0;
        for i in (1..((2 * n) - 1)).step_by(2) {
            ans += (2 * (i as i64));
        }
        ans += ((2 * (n as i64)) - 1);
        return ans;
    }
}
