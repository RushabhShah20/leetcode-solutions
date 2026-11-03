// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves = function (nums) {
    const n = nums.length;
    let mx = 0;
    for (let i = 0; i < n; i++) {
        mx = Math.max(mx, nums[i]);
    }
    let ans = 0;
    for (let i = 0; i < n; i++) {
        ans += mx - nums[i];
    }
    return ans;
};