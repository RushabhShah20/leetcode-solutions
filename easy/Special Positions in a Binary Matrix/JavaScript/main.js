// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
/**
 * @param {number[][]} mat
 * @return {number}
 */
var numSpecial = function (mat) {
    let m = mat.length, n = mat[0].length, ans = 0;
    let rows = new Array(m).fill(0), cols = new Array(n).fill(0);
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (mat[i][j] === 1) {
                rows[i]++;
                cols[j]++;
            }
        }
    }
    for (let i = 0; i < m; i++) {
        for (let j = 0; j < n; j++) {
            if (rows[i] === 1 && cols[j] === 1 && mat[i][j] === 1) {
                ans++;
            }
        }
    }
    return ans;
};