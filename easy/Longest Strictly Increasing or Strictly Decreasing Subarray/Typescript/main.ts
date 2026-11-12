// Problem: Longest Strictly Increasing or Strictly Decreasing Subarray
// Link to the problem: https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/
function longestMonotonicSubarray(nums: number[]): number {
    const n: number = nums.length;
    let a: number = 1, b: number = 1, c: number = 1, d: number = 1;
    for (let i = 1; i < n; i++) {
        if (nums[i] > nums[i - 1]) {
            c++;
            a = Math.max(a, c);
            d = 1;
        }
        else if (nums[i] < nums[i - 1]) {
            d++;
            b = Math.max(b, d);
            c = 1;
        }
        else {
            c = 1;
            d = 1;
        }
    }
    const ans: number = Math.max(a, b);
    return ans;
};