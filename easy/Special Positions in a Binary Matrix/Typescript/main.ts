// Problem: Special Positions in a Binary Matrix
// Link to the problem: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
function numSpecial(mat: number[][]): number {
    let m: number = mat.length, n: number = mat[0].length, ans: number = 0;
    let rows: number[] = new Array(m).fill(0), cols: number[] = new Array(n).fill(0);
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