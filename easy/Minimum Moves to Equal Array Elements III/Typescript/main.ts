// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
function minMoves(nums: number[]): number {
    const n: number = nums.length;
    let mx: number = 0;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, nums[i]);
    }
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        ans += mx - nums[i];
    }
    return ans;
};