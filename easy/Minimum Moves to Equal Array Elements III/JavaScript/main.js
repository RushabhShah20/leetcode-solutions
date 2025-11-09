// Problem: Minimum Moves to Equal Array Elements III
// Link to the problem: https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/
/**
 * @param {number[]} nums
 * @return {number}
 */
var minMoves = function (nums) {
    let ans = 0;
    let x = Math.max(...nums);
    for (const num of nums) {
        ans += (x - num);
    }
    return ans;
};