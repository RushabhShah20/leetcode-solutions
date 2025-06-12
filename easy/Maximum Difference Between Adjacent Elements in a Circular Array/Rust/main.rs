// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
impl Solution {
    pub fn max_adjacent_distance(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 1..nums.len() {
            ans = std::cmp::max((nums[i] - nums[i - 1]).abs(), ans);
        }
        ans = std::cmp::max((nums[nums.len() - 1] - nums[0]).abs(), ans);
        return ans;
    }
}
