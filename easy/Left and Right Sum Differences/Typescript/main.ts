// Problem: Left and Right Sum Differences
// Link to the problem: https://leetcode.com/problems/left-and-right-sum-differences/
function leftRightDifference(nums: number[]): number[] {
    const n: number = nums.length;
    let ans = new Array(n), left = new Array(n), right = new Array(n);
    let sum = 0;
    for (let i = 0; i < n; i++) {
        left[i] = sum;
        sum += nums[i];
    }
    sum = 0;
    for (let i = n - 1; i >= 0; i--) {
        right[i] = sum;
        sum += nums[i];
    }
    for (let i = 0; i < n; i++) {
        ans[i] = Math.abs(left[i] - right[i]);
    }
    return ans;
};