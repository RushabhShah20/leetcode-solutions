// Problem: Find Minimum in Rotated Sorted Array II
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
impl Solution {
    pub fn find_min(nums: Vec<i32>) -> i32 {
        let n: i32 = nums.len() as i32;
        let mut l: i32 = 0;
        let mut r: i32 = n - 1;
        while l <= r {
            let m: i32 = l + (r - l) / 2;
            if nums[m as usize] > nums[r as usize] {
                l = m + 1;
            } else if nums[m as usize] < nums[l as usize] {
                r = m;
                l += 1;
            } else {
                r -= 1;
            }
        }
        let ans: i32 = nums[l as usize];
        return ans;
    }
}
