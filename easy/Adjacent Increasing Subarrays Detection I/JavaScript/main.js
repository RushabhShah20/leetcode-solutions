// Problem: Adjacent Increasing Subarrays Detection I
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var isStrictlyIncreasing = function (nums, start, k) {
    for (let i = start; i < start + k - 1; i++) {
        if (nums[i] >= nums[i + 1]) {
            return false;
        }
    }
    return true;
};
var hasIncreasingSubarrays = function (nums, k) {
    let n = nums.length;
    if (n < 2 * k) {
        return false;
    }
    for (let i = 0; i <= n - 2 * k; i++) {
        if (isStrictlyIncreasing(nums, i, k) && isStrictlyIncreasing(nums, i + k, k)) {
            return true;
        }
    }
    return false;
};