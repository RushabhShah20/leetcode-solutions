// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubsequence = function (nums) {
    const n = nums.length;
    let x = 0;
    let y = true;
    for (let i = 0; i < n; i++) {
        x ^= nums[i];
        if (nums[i] > 0) {
            y = false;
        }
    }
    if (x > 0) {
        return n;
    }
    const ans = y ? 0 : n - 1;
    return ans;
};