// Problem: Missing Number
// Link to the problem: https://leetcode.com/problems/missing-number/
impl Solution {
    pub fn missing_number(nums: Vec<i32>) -> i32 {
        let mut sum: i32 = 0;
        for i in 0..nums.len() {
            sum += nums[i];
        }
        return ((nums.len() as i32 * (nums.len() + 1) as i32) / 2) - sum;
    }
}
