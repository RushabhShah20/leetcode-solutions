// Problem: Find Missing and Repeated Values
// Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
impl Solution {
    pub fn find_missing_and_repeated_values(grid: Vec<Vec<i32>>) -> Vec<i32> {
        let mut freq: Vec<i32> = vec![0; grid.len() * grid[0].len()];
        let mut ans: Vec<i32> = vec![0; 2];
        for i in 0..grid.len() {
            for j in 0..grid[0].len() {
                freq[((grid[i][j] as i32) - 1) as usize] += 1;
            }
        }
        for i in 0..freq.len() {
            if (freq[i] == 0) {
                ans[1] = (i + 1) as i32;
            }
            if (freq[i] == 2) {
                ans[0] = (i + 1) as i32;
            }
        }
        return ans;
    }
}
