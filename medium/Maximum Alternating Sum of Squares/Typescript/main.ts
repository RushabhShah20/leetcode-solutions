// Problem: Maximum Alternating Sum of Squares
// Link to the problem: https://leetcode.com/problems/maximum-alternating-sum-of-squares/
function maxAlternatingSum(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        nums[i] *= nums[i];
    }
    nums.sort((a, b) => a - b);
    for (let i = 0; i < n; i++) {
        if (i < (n >> 1)) {
            ans -= nums[i];
        }
        else {
            ans += nums[i];
        }
    }
    return ans;
};