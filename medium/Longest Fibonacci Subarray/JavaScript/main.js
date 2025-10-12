// Problem: Longest Fibonacci Subarray
// Link to the problem: https://leetcode.com/problems/longest-fibonacci-subarray/
/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubarray = function (nums) {
    let ans = 2, n = nums.length, count = 2;
    for (let i = 2; i < n; i++) {
        if (nums[i] === nums[i - 1] + nums[i - 2]) {
            count++;
        }
        else {
            ans = Math.max(ans, count);
            count = 2;
        }
    }
    ans = Math.max(ans, count);
    return ans;
};