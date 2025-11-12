// Problem: Maximum Difference Between Increasing Elements
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
/**
 * @param {number[]} nums
 * @return {number}
 */
var maximumDifference = function (nums) {
    let n = nums.length, res = 0;
    let pre = new Array(n), suff = new Array(n);
    pre[0] = nums[0];
    suff[n - 1] = nums[n - 1];
    for (let i = 1; i < n; i++) {
        pre[i] = Math.min(pre[i - 1], nums[i]);
    }
    for (let i = n - 2; i >= 0; i--) {
        suff[i] = Math.max(suff[i + 1], nums[i]);
    }
    for (let i = 0; i < n; i++) {
        res = Math.max(res, suff[i] - pre[i]);
    }
    if (res === 0)
        return -1;
    return res;
};