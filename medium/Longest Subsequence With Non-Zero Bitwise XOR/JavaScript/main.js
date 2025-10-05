// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
/**
 * @param {number[]} nums
 * @return {number}
 */
var longestSubsequence = function (nums) {
    let n = nums.length;
    let z = 0;
    for (let num of nums) {
        z ^= num;
    }
    if (z != 0) {
        return n;
    }
    let x = true;
    for (let num of nums) {
        if (num !== 0) {
            x = false;
            break;
        }
    }
    if (x) {
        return 0;
    }
    return n - 1;
};