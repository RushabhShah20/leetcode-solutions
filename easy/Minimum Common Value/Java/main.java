// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
class Solution {
    public int getCommon(int[] nums1, int[] nums2) {
        final int m = nums1.length, n = nums2.length;
        int i = 0, j = 0;
        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                return nums1[i];
            }
        }
        return -1;
    }
}