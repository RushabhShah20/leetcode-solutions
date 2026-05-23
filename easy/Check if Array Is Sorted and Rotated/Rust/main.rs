// Problem: Check if Array Is Sorted and Rotated
// Link to the problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
impl Solution {
    pub fn check(nums: Vec<i32>) -> bool {
        let n: usize = nums.len();
        let mut x: i32 = 0;
        for i in 0..n {
            if (nums[i] > nums[(i + 1) % n]) {
                x += 1;
            }
            if (x > 1) {
                return false;
            }
        }
        return true;
    }
}
