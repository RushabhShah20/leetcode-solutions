// Problem: Find if Digit Game Can Be Won
// Link to the problem: https://leetcode.com/problems/find-if-digit-game-can-be-won/
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canAliceWin = function (nums) {
    let x = 0;
    let y = 0;
    for (const num of nums) {
        if (Math.floor(num / 10) == 0) {
            x += num;
        } else {
            y += num;
        }
    }
    return x != y;
};