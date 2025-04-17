// Problem: Minimum Operations to Exceed Threshold Value I
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-i/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minOperations = function (nums, k) {
    let ans = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] < k) {
            ans++;
        }
    }
    return ans;
};
