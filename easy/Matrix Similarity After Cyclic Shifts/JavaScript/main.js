// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
/**
 * @param {number[][]} mat
 * @param {number} k
 * @return {boolean}
 */
var areSimilar = function (mat, k) {
    const m = mat.length, n = mat[0].length;
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (mat[i][j] !== mat[i][(j + k) % n]) {
                return false;
            }
        }
    }
    return true;
};