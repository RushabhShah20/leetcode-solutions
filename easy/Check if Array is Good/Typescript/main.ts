// Problem: Check if Array is Good
// Link to the problem: https://leetcode.com/problems/check-if-array-is-good/
function isGood(nums: number[]): boolean {
    if (nums.length == 1) {
        return false;
    }
    let n: number = nums.length;
    nums.sort((a, b) => a - b);
    for (let i = 0; i < n - 1; i++) {
        if (nums[i] != i + 1) {
            return false;
        }
    }
    if (nums[n - 1] != n - 1) {
        return false;
    }
    return true;
};