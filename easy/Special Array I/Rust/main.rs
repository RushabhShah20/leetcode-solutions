// Problem: Special Array I
// Link to the problem: https://leetcode.com/problems/special-array-i/
impl Solution {
    pub fn is_array_special(nums: Vec<i32>) -> bool {
        for i in 0..nums.len() - 1 {
            if (nums[i] % 2 == 0 && nums[i + 1] % 2 == 0) {
                return false;
            }
            if (nums[i] % 2 != 0 && nums[i + 1] % 2 != 0) {
                return false;
            }
        }
        return true;
    }
}
