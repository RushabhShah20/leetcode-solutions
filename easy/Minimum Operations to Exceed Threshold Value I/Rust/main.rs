// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
impl Solution {
    pub fn min_operations(nums: Vec<i32>, k: i32) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            if nums[i] < k {
                ans += 1;
            }
        }
        return ans;
    }
}
