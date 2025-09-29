// Problem: Minimum Score Triangulation of Polygon
// Link to the problem: https://leetcode.com/problems/minimum-score-triangulation-of-polygon/
/**
 * @param {number[]} values
 * @return {number}
 */
var minScoreTriangulation = function (values) {
    let n = values.length;
    if (n === 3) {
        return values[0] * values[1] * values[2];
    }
    let dp = Array.from({ length: n - 1 }, () => Array(n).fill(0));
    for (let x = 2; x <= n - 1; x++) {
        for (let i = 0; i < n - x; i++) {
            let j = i + x;
            let w = Number.MAX_VALUE, e = values[i] * values[j];
            for (let k = i + 1; k < j; k++) {
                w = Math.min(w, e * values[k] + dp[i][k] + dp[k][j]);
            }
            dp[i][j] = w;
        }
    }
    return dp[0][n - 1];
};