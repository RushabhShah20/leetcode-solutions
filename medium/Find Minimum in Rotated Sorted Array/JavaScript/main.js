// Problem: Find Minimum in Rotated Sorted Array
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function (nums) {
    const n = nums.length;
    let ans = 5001, l = 0, r = n - 1;
    while (l <= r) {
        const m = l + Math.floor((r - l) / 2);
        if (nums[l] <= nums[m]) {
            ans = Math.min(ans, nums[l]);
            l = m + 1;
        }
        else {
            r = m - 1;
            ans = Math.min(ans, nums[m]);
        }
    }
    return ans;
};