// Problem: Search Insert Position
// Link to the problem: https://leetcode.com/problems/search-insert-position/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var searchInsert = function (nums, target) {
    const n = nums.length;
    let l = 0, r = n - 1;
    while (l <= r) {
        const m = Math.floor((l + r) / 2);
        if (nums[m] === target) {
            return m;
        }
        if (nums[m] < target) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return l;
};