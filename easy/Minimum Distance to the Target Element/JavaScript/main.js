// Problem: Minimum Distance to the Target Element
// Link to the problem: https://leetcode.com/problems/minimum-distance-to-the-target-element/
/**
 * @param {number[]} nums
 * @param {number} target
 * @param {number} start
 * @return {number}
 */
var getMinDistance = function (nums, target, start) {
    const n = nums.length;
    let ans = 1000000000;
    for (let i = 0; i < n; i++) {
        if (nums[i] === target) {
            ans = Math.min(Math.abs(i - start), ans);
        }
    }
    return ans;
};