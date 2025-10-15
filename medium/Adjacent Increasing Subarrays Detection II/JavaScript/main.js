// Problem: Adjacent Increasing Subarrays Detection II
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-ii/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxIncreasingSubarrays = function (nums) {
    let n = nums.length;
    let prevK = 1;
    let k = 1;
    let res = 1;
    for (let i = 0; i < n - 1; i++) {
        if (nums[i + 1] > nums[i])
            k++;
        else {
            prevK = k;
            k = 1;
        }
        res = Math.max(res, Math.min(prevK, k));
        res = Math.max(res, Math.floor(k / 2));
    }
    return res;
};