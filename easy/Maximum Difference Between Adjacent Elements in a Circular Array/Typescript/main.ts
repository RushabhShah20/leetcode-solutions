// Problem: Maximum Difference Between Adjacent Elements in a Circular Array
// Link to the problem: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
function maxAdjacentDistance(nums: number[]): number {
    let ans: number = 0;
    for (let i = 1; i < nums.length; i++) {
        ans = Math.max(Math.abs(nums[i] - nums[i - 1]), ans);
    }
    ans = Math.max(Math.abs(nums[nums.length - 1] - nums[0]), ans);
    return ans;
};