// Problem: Jump Game
// Link to the problem: https://leetcode.com/problems/jump-game/
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
    let n = nums.length, x = 0;
    for (let i = 0; i < n; i++) {
        if (i > x) {
            return false;
        }
        x = Math.max(x, i + nums[i]);
    }
    return true;
};