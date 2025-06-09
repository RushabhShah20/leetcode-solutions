// Problem: Sign of the Product of an Array
// Link to the problem: https://leetcode.com/problems/sign-of-the-product-of-an-array/
impl Solution {
    pub fn array_sign(nums: Vec<i32>) -> i32 {
        let mut sign: i32 = 1;
        for i in 0..nums.len() {
            if (nums[i] == 0) {
                return 0;
            } else if (nums[i] < 0) {
                sign *= -1;
            }
        }
        return sign;
    }
}
