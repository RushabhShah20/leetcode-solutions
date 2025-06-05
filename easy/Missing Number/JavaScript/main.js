// Problem: Missing Number
// Link to the problem: https://leetcode.com/problems/missing-number/
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function (nums) {
    let sum = 0;
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];
    }
    return (((nums.length * (nums.length + 1)) / 2) >> 0) - sum;
};
