// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
function longestSubsequence(nums: number[]): number {
    let n: number = nums.length;
    let z: number = 0;
    for (let num of nums) {
        z ^= num;
    }
    if (z != 0) {
        return n;
    }
    let x: boolean = true;
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