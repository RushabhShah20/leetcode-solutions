// Problem: Minimum Time to Make Rope Colorful
// Link to the problem: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/
impl Solution {
    pub fn min_cost(colors: String, mut needed_time: Vec<i32>) -> i32 {
        let n: usize = colors.len();
        let mut col: Vec<char> = colors.chars().collect();
        let mut ans: i32 = 0;
        for i in 1..n {
            if (col[i] == col[i - 1]) {
                ans += (needed_time[i].min(needed_time[i - 1]));
                needed_time[i] = needed_time[i].max(needed_time[i - 1]);
            }
        }
        return ans;
    }
}
