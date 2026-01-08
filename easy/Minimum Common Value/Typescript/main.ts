// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
function getCommon(nums1: number[], nums2: number[]): number {
    const m: number = nums1.length, n: number = nums2.length;
    let i: number = 0, j: number = 0;
    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) {
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            return nums1[i];
        }
    }
    return -1;
};