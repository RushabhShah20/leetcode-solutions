// Problem: Find Missing and Repeated Values
// Link to the problem: https://leetcode.com/problems/find-missing-and-repeated-values/
/**
 * @param {number[][]} grid
 * @return {number[]}
 */
var findMissingAndRepeatedValues = function (grid) {
    let freq = new Array(grid.length * grid[0].length).fill(0);
    let ans = new Array(2).fill(0);
    for (let i = 0; i < grid.length; i++) {
        for (let j = 0; j < grid[0].length; j++) {
            freq[grid[i][j] - 1]++;
        }
    }
    for (let i = 0; i < freq.length; i++) {
        if (freq[i] == 0) {
            ans[1] = i + 1;
        }
        if (freq[i] == 2) {
            ans[0] = i + 1;
        }
    }
    return ans;
};