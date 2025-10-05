// Problem: Compute Alternating Sum
// Link to the problem: https://leetcode.com/problems/compute-alternating-sum/
impl Solution {
    pub fn alternating_sum(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            if (i % 2 == 0) {
                ans += nums[i];
            } else {
                ans -= nums[i];
            }
        }
        return ans;
    }
}
