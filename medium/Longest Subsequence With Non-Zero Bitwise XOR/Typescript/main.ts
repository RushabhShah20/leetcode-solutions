// Problem: Longest Subsequence With Non-Zero Bitwise XOR
// Link to the problem: https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/
function longestSubsequence(nums: number[]): number {
    const n: number = nums.length;
    let x: number = 0;
    let y: boolean = true;
    for (let i = 0; i < n; i++) {
        x ^= nums[i];
        if (nums[i] > 0) {
            y = false;
        }
    }
    if (x > 0) {
        return n;
    }
    const ans: number = y ? 0 : n - 1;
    return ans;
};