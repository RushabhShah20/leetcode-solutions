// Problem: Largest Perimeter Triangle
// Link to the problem: https://leetcode.com/problems/largest-perimeter-triangle/
impl Solution {
    pub fn largest_perimeter(mut nums: Vec<i32>) -> i32 {
        nums.sort();
        for i in (2..nums.len()).rev() {
            if (nums[i] < nums[i - 1] + nums[i - 2]) {
                return nums[i] + nums[i - 1] + nums[i - 2];
            }
        }
        return 0;
    }
}
