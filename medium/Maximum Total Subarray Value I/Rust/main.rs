// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
impl Solution {
    pub fn max_total_value(nums: Vec<i32>, k: i32) -> i64 {
        let mut ans: i64 = 0;
        let mut maxELement: i32 = nums[0];
        let mut minElement: i32 = nums[0];
        for i in 1..nums.len() {
            if maxELement < nums[i] {
                maxELement = nums[i];
            }
            if minElement > nums[i] {
                minElement = nums[i];
            }
        }
        ans = (((maxELement - minElement) as i64) * (k as i64));
        return ans;
    }
}
