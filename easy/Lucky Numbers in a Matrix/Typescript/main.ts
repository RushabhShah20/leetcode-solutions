// Problem: Lucky Numbers in a Matrix
// Link to the problem: https://leetcode.com/problems/lucky-numbers-in-a-matrix/
function luckyNumbers(matrix: number[][]): number[] {
    const m: number = matrix.length, n: number = matrix[0].length;
    let ans: number[] = new Array(), col: number = -1;
    for (let i = 0; i < m; i++) {
        let minVal: number = 100001;
        let maxVal: number = 0;
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