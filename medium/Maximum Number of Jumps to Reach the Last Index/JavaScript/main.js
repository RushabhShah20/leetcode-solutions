// Problem: Maximum Number of Jumps to Reach the Last Index
// Link to the problem: https://leetcode.com/problems/maximum-number-of-jumps-to-reach-the-last-index/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var maximumJumps = function (nums, target) {
    const n = nums.length;
    let dp = new Array(n);
    for (let i = 0; i < n; i++) {
        dp[i] = -1;
    }
    dp[0] = 0;
    for (let i = 1; i < n; i++) {
        for (let j = 0; j < i; j++) {
            if (Math.abs(nums[i] - nums[j]) <= target && dp[j] !== -1) {
                dp[i] = Math.max(dp[i], dp[j] + 1);
            }
        }
    }
    const ans = dp[n - 1];
    return ans;
};