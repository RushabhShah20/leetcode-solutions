// Problem: Minimum Operations to Make Array Sum Divisible by K
// Link to the problem: https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var minOperations = function (nums, k) {
    let sum = 0;
    for (const num of nums) {
        sum += num;
    }
    let ans = sum % k;
    return ans;
};