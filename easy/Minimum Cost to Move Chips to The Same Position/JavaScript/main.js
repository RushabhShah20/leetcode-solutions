// Problem: Minimum Cost to Move Chips to The Same Position
// Link to the problem: https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
/**
 * @param {number[]} position
 * @return {number}
 */
var minCostToMoveChips = function (position) {
    let even = 0, odd = 0;
    for (const i of position) {
        if (i % 2 === 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    let ans = Math.min(even, odd);
    return ans;
};