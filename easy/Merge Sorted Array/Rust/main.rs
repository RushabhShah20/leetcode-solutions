// Problem: Merge Sorted Array
// Link to the problem: https://leetcode.com/problems/merge-sorted-array/
impl Solution {
    pub fn merge(nums1: &mut Vec<i32>, m: i32, nums2: &mut Vec<i32>, n: i32) {
        let mut i: i32 = (m - 1);
        let mut j: i32 = (n - 1);
        let mut k: usize = (m + n - 1) as usize;
        while (j >= 0) {
            if (i >= 0 && nums1[i as usize] > nums2[j as usize]) {
                nums1[k] = nums1[i as usize];
                k -= 1;
                i -= 1;
            } else {
                nums1[k] = nums2[j as usize];
                k -= 1;
                j -= 1;
            }
        }
    }
}
