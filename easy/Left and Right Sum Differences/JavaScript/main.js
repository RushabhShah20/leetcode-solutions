// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var leftRightDifference = function (nums) {
    let ans = new Array(nums.length), left = new Array(nums.length), right = new Array(nums.length);
    let sum = 0;
    for (let i = 0; i < nums.length; i++) {
        left[i] = sum;
        sum += nums[i];
    }
    sum = 0;
    for (let i = nums.length - 1; i >= 0; i--) {
        right[i] = sum;
        sum += nums[i];
    }
    for (let i = 0; i < nums.length; i++) {
        ans[i] = Math.abs(left[i] - right[i]);
    }
    return ans;
};