// Problem: Matrix Similarity After Cyclic Shifts
// Link to the problem: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/
function areSimilar(mat: number[][], k: number): boolean {
    const m: number = mat.length, n: number = mat[0].length;
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (mat[i][j] !== mat[i][(j + k) % n]) {
                return false;
            }
        }
    }
    return true;
};