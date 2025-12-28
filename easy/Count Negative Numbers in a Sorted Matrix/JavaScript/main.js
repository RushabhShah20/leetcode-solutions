// Problem: Count Negative Numbers in a Sorted Matrix
// Link to the problem: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
/**
 * @param {number[][]} grid
 * @return {number}
 */
var countNegatives = function (grid) {
    const m = grid.length, n = grid[0].length;
    let ans = 0, i = m - 1, j = 0;
    while (i >= 0 && j < n) {
        if (grid[i][j] < 0) {
            ans += (n - j);
            i--;
        }
        else {
            j++;
        }
    }
    return ans;
};