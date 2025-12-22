// Problem: Merge Sorted Array
// Link to the problem: https://leetcode.com/problems/merge-sorted-array/
/**
 Do not return anything, modify nums1 in-place instead.
 */
function merge(nums1: number[], m: number, nums2: number[], n: number): void {
    let i: number = m - 1, j: number = n - 1, k: number = m + n - 1;
    while (j >= 0) {
        if (i >= 0 && nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};