// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
/**
 * @param {number[][]} mat
 * @return {number}
 */
var diagonalSum = function (mat) {
    const n = mat.length;
    let ans = 0;
    for (let i = 0; i < n; i++) {
        ans += mat[i][i];
        if (i !== n - 1 - i) {
            ans += mat[i][n - i - 1];
        }
    }
    return ans;
};