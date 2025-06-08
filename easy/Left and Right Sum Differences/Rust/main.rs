// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
impl Solution {
    pub fn left_right_difference(nums: Vec<i32>) -> Vec<i32> {
        let mut ans: Vec<i32> = vec![0; nums.len()];
        let mut left: Vec<i32> = vec![0; nums.len()];
        let mut right: Vec<i32> = vec![0; nums.len()];
        let mut sum: i32 = 0;
        for i in 0..nums.len() {
            left[i] = sum;
            sum += nums[i];
        }
        sum = 0;
        for i in (0..nums.len()).rev() {
            right[i] = sum;
            sum += nums[i];
        }
        for i in 0..nums.len() {
            ans[i] = (left[i] - right[i]).abs();
        }
        return ans;
    }
}
