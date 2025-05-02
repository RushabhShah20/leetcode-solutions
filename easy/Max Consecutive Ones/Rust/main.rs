// Problem: Max Consecutive Ones
// Link to the problem: https://leetcode.com/problems/max-consecutive-ones/
impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut count: i32 = 0;
        for i in 0..nums.len() {
            if nums[i] == 1 {
                count += 1;
                ans = std::cmp::max(ans, count);
            } else {
                count = 0;
            }
        }
        return ans;
    }
}
