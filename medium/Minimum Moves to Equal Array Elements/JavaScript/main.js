// Problem: Minimum Moves to Equal Array Elements
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves = function (nums) {
    const n = nums.length;
    let ans = 0, mn = 1000000001;
    for (let i = 0; i < n; i++) {
        mn = Math.min(mn, nums[i]);
    }
    for (let i = 0; i < n; i++) {
        ans += nums[i] - mn;
    }
    return ans;
};