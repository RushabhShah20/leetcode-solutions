// Problem: Lucky Numbers in a Matrix
// Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var luckyNumbers = function (matrix) {
    const m = matrix.length, n = matrix[0].length;
    let ans = new Array(), col = -1;
    for (let i = 0; i < m; i++) {
        let minVal = 100001;
        let maxVal = 0;
        for (let j = 0; j < n; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                col = j;
            }
        }
        for (let k = 0; k < m; k++) {
            if (matrix[k][col] > maxVal) {
                maxVal = matrix[k][col];
            }
        }
        if (minVal == maxVal) {
            ans.push(minVal);
        }
    }
    return ans;
};