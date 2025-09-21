// Problem: Bitwise OR of Even Numbers in an Array
// Link to the problem: https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/
impl Solution {
    pub fn even_number_bitwise_o_rs(nums: Vec<i32>) -> i32 {
        let mut ans: i32 = 0;
        for i in 0..nums.len() {
            if (nums[i] % 2 == 0) {
                ans |= nums[i];
            }
        }
        return ans;
    }
}
