// Problem: Flip Square Submatrix Vertically
// Link to the problem: https://leetcode.com/problems/flip-square-submatrix-vertically/
function reverseSubmatrix(grid: number[][], x: number, y: number, k: number): number[][] {
    let ans: number[][] = grid;
    for (let i = x; i < x + Math.floor((k + 1) / 2); i++) {
        for (let j = y; j < y + k; j++) {
            const temp: number = ans[i][j];
            ans[i][j] = ans[2 * x + k - i - 1][j];
            ans[2 * x + k - i - 1][j] = temp;
        }
    }
    return ans;
};