// Problem: Count Odd Numbers in an Interval Range
// Link to the problem: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
impl Solution {
    pub fn count_odds(low: i32, high: i32) -> i32 {
        let mut ans: i32;
        if (low % 2 == 0) {
            ans = (high - low + 1) / 2;
        } else {
            ans = (high - low + 2) / 2;
        }
        return ans;
    }
}
