// Problem: Find Minimum in Rotated Sorted Array II
// Link to the problem: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function (nums) {
    const n = nums.length;
    let l = 0, r = n - 1;
    while (l <= r) {
        const m = l + Math.floor((r - l) / 2);
        if (nums[m] > nums[r]) {
            l = m + 1;
        }
        else if (nums[m] < nums[l]) {
            r = m;
            l++;
        }
        else {
            r--;
        }
    }
    const ans = nums[l];
    return ans;
};