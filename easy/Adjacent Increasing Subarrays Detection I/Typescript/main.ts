// Problem: Adjacent Increasing Subarrays Detection I
// Link to the problem: https://leetcode.com/problems/adjacent-increasing-subarrays-detection-i/
function isStrictlyIncreasing(nums: number[], start: number, k: number): boolean {
    for (let i = start; i < start + k - 1; i++) {
        if (nums[i] >= nums[i + 1]) {
            return false;
        }
    }
    return true;
}
function hasIncreasingSubarrays(nums: number[], k: number): boolean {
    let n: number = nums.length;
    if (n < 2 * k) {
        return false;
    }
    for (let i = 0; i <= n - 2 * k; i++) {
        if (isStrictlyIncreasing(nums, i, k) && isStrictlyIncreasing(nums, i + k, k)) {
            return true;
        }
    }
    return false;
};