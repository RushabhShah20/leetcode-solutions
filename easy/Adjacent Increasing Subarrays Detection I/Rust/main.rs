// Problem: Adjacent Increasing Subarrays Detection I
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
impl Solution {
    pub fn is_strictly_increasing(nums: &Vec<i32>, start: usize, k: usize) -> bool {
        for i in start..start + k - 1 {
            if (nums[i] >= nums[i + 1]) {
                return false;
            }
        }
        return true;
    }
    pub fn has_increasing_subarrays(nums: Vec<i32>, k: i32) -> bool {
        let n: usize = nums.len();
        if (n < 2 * (k as usize)) {
            return false;
        }
        for i in 0..n - (2 * (k as usize)) + 1 {
            if (Self::is_strictly_increasing(&nums, i, k as usize)
                && Self::is_strictly_increasing(&nums, i + (k as usize), k as usize))
            {
                return true;
            }
        }
        return false;
    }
}
