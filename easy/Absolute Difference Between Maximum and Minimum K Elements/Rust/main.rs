// Problem: Absolute Difference Between Maximum and Minimum K Elements
// Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
impl Solution {
    pub fn abs_difference(mut nums: Vec<i32>, k: i32) -> i32 {
        nums.sort();
        let mut ans: i32 = 0;
        let n: usize = nums.len();
        for i in 0..(k as usize) {
            ans += (-nums[i] + nums[n - i - 1]);
        }
        return ans;
    }
}
