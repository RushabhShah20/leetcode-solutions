// Problem: Absolute Difference Between Maximum and Minimum K Elements
// Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var absDifference = function (nums, k) {
    nums.sort((a, b) => a - b);
    let ans = 0, n = nums.length;
    for (let i = 0; i < k; i++) {
        ans += (-nums[i] + nums[n - i - 1]);
    }
    return ans;
};