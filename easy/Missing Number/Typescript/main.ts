// Problem: Missing Number
// Link to the problem: https://leetcode.com/problems/missing-number/
function missingNumber(nums: number[]): number {
    let sum: number = 0;
    for (let i = 0; i < nums.length; i++) {
        sum += nums[i];
    }
    return (((nums.length * (nums.length + 1)) / 2) >> 0) - sum;
};