// Problem: Rotate Function
// Link to the problem: https://leetcode.com/problems/rotate-function/
function maxRotateFunction(nums: number[]): number {
    const n: number = nums.length;
    let x: number = 0, y: number = 0;
    for (let i = 0; i < n; i++) {
        x += nums[i];
        y += i * nums[i];
    }
    let ans: number = y;
    for (let i = n - 1; i >= 0; i--) {
        y = y + x - n * nums[i];
        ans = Math.max(ans, y);
    }
    return ans;
};