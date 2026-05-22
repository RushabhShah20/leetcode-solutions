// Problem: Search in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/search-in-rotated-sorted-array/
impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
        let n: usize = nums.len();
        let mut l: usize = 0;
        let mut r: usize = n - 1;
        while (l <= r) {
            let m: usize = l + (r - l) / 2;
            if (nums[m] == target) {
                return m as i32;
            }
            if (nums[m] >= nums[l]) {
                if (nums[l] <= target && target < nums[m]) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            } else {
                if (nums[m] < target && nums[r] >= target) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }
        return -1;
    }
}
