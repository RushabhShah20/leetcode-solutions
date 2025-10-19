// Problem: Check if Bitwise OR Has Trailing Zeros
// Link to the problem: https://leetcode.com/problems/check-if-bitwise-or-has-trailing-zeros/
impl Solution {
    pub fn has_trailing_zeros(nums: Vec<i32>) -> bool {
        let mut count: i32 = 0;
        for num in &nums {
            if (num % 2 == 0) {
                count += 1;
            }
            if (count == 2) {
                return true;
            }
        }
        return false;
    }
}
