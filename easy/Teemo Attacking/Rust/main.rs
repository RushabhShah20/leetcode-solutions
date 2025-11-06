// Problem: Teemo Attacking
// Link to the problem: https://leetcode.com/problems/teemo-attacking/
impl Solution {
    pub fn find_poisoned_duration(time_series: Vec<i32>, duration: i32) -> i32 {
        let mut ans: i32 = 0;
        let n: usize = time_series.len();
        for i in 1..n {
            ans += duration.min(time_series[i] - time_series[i - 1]);
        }
        ans += duration;
        return ans;
    }
}
