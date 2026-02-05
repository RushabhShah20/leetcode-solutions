// Problem: Transformed Array
// Link to the problem: https://leetcode.com/problems/transformed-array/
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var constructTransformedArray = function (nums) {
    const n = nums.length;
    let ans = new Array(n);
    for (let i = 0; i < n; i++) {
        ans[i] = nums[(i + nums[i] % n + n) % n];
    }
    return ans;
};