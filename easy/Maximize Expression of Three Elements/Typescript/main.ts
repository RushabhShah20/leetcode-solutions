// Problem: Maximize Expression of Three Elements
// Link to the problem: https://leetcode.com/problems/maximize-expression-of-three-elements/
function maximizeExpressionOfThree(nums: number[]): number {
    let n: number = nums.length;
    nums.sort((a, b) => a - b);
    return nums[n - 1] + nums[n - 2] - nums[0];
};