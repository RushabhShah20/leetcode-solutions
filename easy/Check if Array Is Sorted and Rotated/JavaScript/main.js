// Problem: Check if Array Is Sorted and Rotated
// Link to the problem: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function (nums) {
    const n = nums.length;
    let x = 0;
    for (let i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            x++;
        }
        if (x > 1) {
            return false;
        }
    }
    return true;
};