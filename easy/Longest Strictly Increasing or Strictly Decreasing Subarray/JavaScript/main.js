// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
/**
 * @param {number[]} nums
 * @return {number}
 */
var longestMonotonicSubarray = function (nums) {
    const n = nums.length;
    let a = 1, b = 1, c = 1, d = 1;
    for (let i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            c++;
            a = Math.max(a, c);
            d = 1;
        }
        else if (nums[i] < nums[i - 1]) {
            d++;
            b = Math.max(b, d);
            c = 1;
        }
        else {
            c = 1;
            d = 1;
        }
    }
    const ans = Math.max(a, b);
    return ans;
};