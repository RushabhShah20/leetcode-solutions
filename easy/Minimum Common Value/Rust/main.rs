// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
impl Solution {
    pub fn get_common(nums1: Vec<i32>, nums2: Vec<i32>) -> i32 {
        let m: usize = nums1.len();
        let n: usize = nums2.len();
        let mut i: usize = 0;
        let mut j: usize = 0;
        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                j += 1;
            } else if (nums1[i] < nums2[j]) {
                i += 1;
            } else {
                return nums1[i];
            }
        }
        return -1;
    }
}
