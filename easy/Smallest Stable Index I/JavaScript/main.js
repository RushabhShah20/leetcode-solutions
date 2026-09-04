// Problem: Smallest Stable Index I
// Link to the problem: https://leetcode.com/problems/smallest-stable-index-i/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var firstStableIndex = function (nums, k) {
    const n = nums.length;
    let mn = new Array(n), mx = new Array(n);
    mx[0] = nums[0];
    for (let i = 1; i < n; i++) {
        mx[i] = Math.max(mx[i - 1], nums[i]);
    }
    mn[n - 1] = nums[n - 1];
    for (let i = n - 2; i >= 0; i--) {
        mn[i] = Math.min(mn[i + 1], nums[i]);
    }
    for (let i = 0; i < n; i++) {
        if (mx[i] - mn[i] <= k) {
            return i;
        }
    }
    return -1;
};