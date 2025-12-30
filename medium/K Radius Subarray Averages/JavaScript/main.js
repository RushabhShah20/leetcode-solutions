// Problem: K Radius Subarray Averages
// Link to the problem: https://leetcode.com/problems/k-radius-subarray-averages/
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var getAverages = function (nums, k) {
    const n = nums.length, m = (2 * k) + 1;
    let ans = new Array(n).fill(-1);
    let sum = 0;
    for (let i = 0; i < n; i++) {
        if (i >= m) {
            sum += nums[i];
            sum -= nums[i - m];
        }
        else {
            sum += nums[i];
        }
        if (i >= m - 1) {
            ans[i - k] = Math.floor(sum / m);
        }
    }
    return ans;
};