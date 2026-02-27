// Problem: Matrix Diagonal Sum
// Link to the problem: https://leetcode.com/problems/matrix-diagonal-sum/
function diagonalSum(mat: number[][]): number {
    const n: number = mat.length;
    let ans: number = 0;
    for (let i = 0; i < n; i++) {
        ans += mat[i][i];
        if (i !== n - 1 - i) {
            ans += mat[i][n - i - 1];
        }
    }
    return ans;
};