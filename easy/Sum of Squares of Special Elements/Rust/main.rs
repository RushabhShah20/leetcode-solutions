// Problem: Sum of Squares of Special Elements
// Link to the problem: https://leetcode.com/problems/sum-of-squares-of-special-elements/
impl Solution {
    pub fn sum_of_squares(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            if (nums.len() % (i + 1) == 0) {
                ans += (nums[i] * nums[i]);
            }
        }
        ans
    }
}
