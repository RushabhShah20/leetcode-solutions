// Problem: Minimum Common Value
// Link to the problem: https://leetcode.com/problems/minimum-common-value/
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var getCommon = function (nums1, nums2) {
    const m = nums1.length, n = nums2.length;
    let i = 0, j = 0;
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