// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
function minScoreTriangulation(values: number[]): number {
    let n: number = values.length;
    if (n === 3) {
        return values[0] * values[1] * values[2];
    }
    let dp: number[][] = Array.from({ length: n - 1 }, () => Array(n).fill(0));
    for (let x = 2; x <= n - 1; x++) {
        for (let i = 0; i < n - x; i++) {
            let j: number = i + x;
            let w: number = Number.MAX_VALUE, e: number = values[i] * values[j];
            for (let k = i + 1; k < j; k++) {
                w = Math.min(w, e * values[k] + dp[i][k] + dp[k][j]);
            }
            dp[i][j] = w;
        }
    }
    return dp[0][n - 1];
};