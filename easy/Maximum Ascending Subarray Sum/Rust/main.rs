// Problem: Maximum Ascending Subarray Sum
// Link to the problem: https://leetcode.com/problems/maximum-ascending-subarray-sum/
impl Solution {
    pub fn max_ascending_sum(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        let mut sum: i32 = nums[0];
        for i in 1..nums.len() {
            if (nums[i] > nums[i - 1]) {
                sum += nums[i];
            } else {
                ans = ans.max(sum);
                sum = nums[i];
            }
        }
        ans = ans.max(sum);
        return ans;
    }
}
