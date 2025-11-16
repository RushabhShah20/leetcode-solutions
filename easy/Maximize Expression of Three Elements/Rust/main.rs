// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
impl Solution {
    pub fn maximize_expression_of_three(mut nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        nums.sort();
        return nums[n - 1] + nums[n - 2] - nums[0];
    }
}
