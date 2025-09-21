// Problem: Maximum Total Subarray Value I
// Link to the problem: https://leetcode.com/problems/maximum-total-subarray-value-i/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var maxTotalValue = function (nums, k) {
    let ans = 0;
    let maxELement = nums[0], minElement = nums[0];
    for (let i = 1; i < nums.length; i++) {
        if (maxELement < nums[i]) {
            maxELement = nums[i];
        }
        if (minElement > nums[i]) {
            minElement = nums[i];
        }
    }
    ans = ((maxELement - minElement) * (k));
    return ans;
};