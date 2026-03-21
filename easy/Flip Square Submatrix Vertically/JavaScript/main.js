// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
/**
 * @param {number[][]} grid
 * @param {number} x
 * @param {number} y
 * @param {number} k
 * @return {number[][]}
 */
var reverseSubmatrix = function (grid, x, y, k) {
    let ans = grid;
    for (let i = x; i < x + Math.floor((k + 1) / 2); i++) {
        for (let j = y; j < y + k; j++) {
            const temp = ans[i][j];
            ans[i][j] = ans[2 * x + k - i - 1][j];
            ans[2 * x + k - i - 1][j] = temp;
        }
    }
    return ans;
};