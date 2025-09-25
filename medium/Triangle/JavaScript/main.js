// Problem: Triangle
// Link to the problem: https://leetcode.com/problems/triangle/
/**
 * @param {number[][]} triangle
 * @return {number}
 */
var minimumTotal = function (triangle) {
    let n = triangle.length;
    let dp = new Array(n);
    for (let i = 0; i < n; i++) {
        dp[i] = triangle[n - 1][i];
    }
    for (let i = n - 2; i >= 0; i--) {
        for (let j = 0; j < triangle[i].length; j++) {
            dp[j] = triangle[i][j] + Math.min(dp[j], dp[j + 1]);
        }
    }
    return dp[0];
};