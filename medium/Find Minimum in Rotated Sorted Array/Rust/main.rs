// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
impl Solution {
    pub fn find_min(nums: Vec<i32>) -> i32 {
        let n: usize = nums.len();
        let mut ans: i32 = 5001;
        let mut l: usize = 0;
        let mut r: usize = n - 1;
        while (l <= r) {
            let m: usize = l + (r - l) / 2;
            if (nums[l] <= nums[m]) {
                ans = ans.min(nums[l]);
                l = m + 1;
            } else {
                r = m - 1;
                ans = ans.min(nums[m]);
            }
        }
        return ans;
    }
}
