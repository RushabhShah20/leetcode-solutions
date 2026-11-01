// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
function minMoves(nums: number[]): number {
    const n: number = nums.length;
    let ans: number = 0, mn: number = 1000000001;
    for (let i = 0; i < n; i++) {
        mn = Math.min(mn, nums[i]);
    }
    for (let i = 0; i < n; i++) {
        ans += nums[i] - mn;
    }
    return ans;
};