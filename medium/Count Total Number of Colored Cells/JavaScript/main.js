// Problem: Count Total Number of Colored Cells
// Link to the problem: https://leetcode.com/problems/count-total-number-of-colored-cells/
/**
 * @param {number} n
 * @return {number}
 */
var coloredCells = function (n) {
    let ans = 0;
    for (let i = 1; i < (2 * n) - 1; i += 2) {
        ans += (2 * i);
    }
    ans += ((2 * n) - 1);
    return ans;
};