// Problem: Absolute Difference Between Maximum and Minimum K Elements
// Link to the problem: https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/
function absDifference(nums: number[], k: number): number {
    nums.sort((a, b) => a - b);
    let ans: number = 0, n: number = nums.length;
    for (let i = 0; i < k; i++) {
        ans += (-nums[i] + nums[n - i - 1]);
    }
    return ans;
};