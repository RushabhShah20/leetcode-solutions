// Problem: Check if Matrix Is X-Matrix
// Link to the problem: https://leetcode.com/problems/check-if-matrix-is-x-matrix/
/**
 * @param {number[][]} grid
 * @return {boolean}
 */
var checkXMatrix = function (grid) {
    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[0].length; j++) {
            if (i == j || i + j == (grid.length - 1)) {
                if (grid[i][j] == 0) {
                    return false;
                }
            }
            else {
                if (grid[i][j] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
};