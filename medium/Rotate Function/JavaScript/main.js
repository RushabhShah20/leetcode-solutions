// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxRotateFunction = function (nums) {
    const n = nums.length;
    let x = 0, y = 0;
    for (let i = 0; i < n; i++) {
        x += nums[i];
        y += i * nums[i];
    }
    let ans = y;
    for (let i = n - 1; i >= 0; i--) {
        y = y + x - n * nums[i];
        ans = Math.max(ans, y);
    }
    return ans;
};