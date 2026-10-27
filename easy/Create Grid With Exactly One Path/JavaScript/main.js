// Problem: Create Grid With Exactly One Path
// Link to the problem: https://leetcode.com/problems/create-grid-with-exactly-one-path/
/**
 * @param {number} m
 * @param {number} n
 * @return {string[]}
 */
var createGrid = function (m, n) {
    const grid = Array.from({ length: m }, () => new Array(n).fill('#'));
    for (let i = 0; i < n; i++) {
        grid[0][i] = '.';
    }
    for (let i = 0; i < m; i++) {
        grid[i][n - 1] = '.';
    }
    return grid.map(row => row.join(''));
};