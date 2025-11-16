// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximizeExpressionOfThree = function (nums) {
    let n = nums.length;
    nums.sort((a, b) => a - b);
    return nums[n - 1] + nums[n - 2] - nums[0];
};