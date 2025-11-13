// Problem: Monotonic Array
// Link to the problem: https://leetcode.com/problems/monotonic-array/
impl Solution {
    pub fn is_monotonic(nums: Vec<i32>) -> bool {
        let len: usize = nums.len();
        if (nums[len - 1] >= nums[0]) {
            for i in 1..len {
                if (nums[i] < nums[i - 1]) {
                    return false;
                }
            }
        } else {
            for i in 0..len - 1 {
                if (nums[i] < nums[i + 1]) {
                    return false;
                }
            }
        }
        return true;
    }
}
